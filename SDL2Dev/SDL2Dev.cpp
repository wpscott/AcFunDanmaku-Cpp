#define SDL_MAIN_HANDLED

#include <filesystem>
#include <iomanip>
#include <iostream>

#include <Box2D/Box2D.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <glad/glad.h>

constexpr auto MET2PIX = 80.f; // 640 / 80 = 8

constexpr auto WIDTH = 640;
constexpr auto HEIGHT = 480;

constexpr auto SCALED_WIDTH = WIDTH / MET2PIX; // 4 | 3
constexpr auto SCALED_HEIGHT = HEIGHT / MET2PIX;

//1 rad × 180/π = 57,296°
constexpr auto RAD2DEG = 180.f / b2_pi;

using namespace std;
namespace fs = filesystem;

int main(int argc, char* argv[])
{
    SDL_SetMainReady();
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow("AcFun Danmaku", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_BORDERLESS);

    if (!window) {
        cout << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
        SDL_Quit();
        return EXIT_FAILURE;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    b2Vec2 gravity(0.0f, 9.81f);
    b2World* world = new b2World(gravity);

    // cartesian origin
    float ground_x = 0.f;
    float ground_y = 0.f;

    // start ground point
    b2Vec2 startpoint(SCALED_WIDTH / -2.f, SCALED_HEIGHT / 2.f);

    // end ground point
    b2Vec2 endpoint(SCALED_WIDTH / 2.f, SCALED_HEIGHT / 2.f);

    // LineGround
    b2BodyDef myGroundDef;
    myGroundDef.position.Set(ground_x, ground_y); // set the starting position x and y cartesian

    b2Body* groundBody = world->CreateBody(&myGroundDef);

    //b2PolygonShape groundShape;
    //groundShape.SetAsBox(SCALED_WIDTH / 2.f, SCALED_HEIGHT / 2.f);

    b2EdgeShape edgeShape;
    edgeShape.SetTwoSided(startpoint, endpoint); // length -> coordinate vector from to vector

    b2FixtureDef edgeFixtureDef;
    edgeFixtureDef.shape = &edgeShape;
    groundBody->CreateFixture(&edgeFixtureDef);
    //groundBody->CreateFixture(&groundShape, 0.f);

    SDL_Rect groundRect;
    groundRect.x = 0;
    groundRect.y = 0;
    groundRect.w = WIDTH;
    groundRect.h = HEIGHT;
    
    SDL_Surface* tmp_sprites;
    tmp_sprites = IMG_Load("banana.png");
    if (!tmp_sprites) {
        cout << "Image not found: " << SDL_GetError()  << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return EXIT_FAILURE;
    }

    SDL_Texture* texture_box = SDL_CreateTextureFromSurface(renderer, tmp_sprites);
    SDL_FreeSurface(tmp_sprites);

    // cartesian origin box
    float x_box = 0.f;
    float y_box = -3.f;

    // size of box
    float w_box = 0.6f;
    float h_box = 0.6f;

    // Box
    SDL_Rect box;
    b2Body* Body;

    b2BodyDef boxBodyDef;
    boxBodyDef.type = b2_dynamicBody;
    boxBodyDef.angle = 6; // flips the whole thing -> 180 grad drehung
    //boxBodyDef.angle = 0;
    boxBodyDef.position.Set(x_box, y_box);

    Body = world->CreateBody(&boxBodyDef);

    b2PolygonShape dynamicBox;
    dynamicBox.SetAsBox(w_box / 2.0f, h_box / 2.0f); // will be 0.5 x 0.5

    b2FixtureDef fixtureDef;
    fixtureDef.shape = &dynamicBox;
    fixtureDef.density = 1;
    fixtureDef.friction = 0.3f;
    fixtureDef.restitution = 0.5f;
    Body->CreateFixture(&fixtureDef);

    // box: convert Metres back to Pixels for width and height
    box.w = w_box * MET2PIX;
    box.h = h_box * MET2PIX;

    bool close_game = false;
    SDL_Event event;

    

    // The game Loop
    while (close_game != true)
    {
        b2Vec2 pos = Body->GetPosition(); // Body = Body from box
        float angle = Body->GetAngle();

        cout << "Origin angle: " << angle << endl;

        // RAD2Degree
        angle *= RAD2DEG;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                close_game = true;

            else if (event.key.keysym.sym == SDLK_ESCAPE)
                close_game = true;
        }

        box.x = ((SCALED_WIDTH / 2.0f) + pos.x) * MET2PIX - box.w / 2;
        box.y = ((SCALED_HEIGHT / 2.0f) + pos.y) * MET2PIX - box.h / 2;

        cout << "X: " << setprecision(20) << box.x << "\tY: " << setprecision(20) << box.y << "\tAngle: " << angle << endl;

        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);

        // Draw ground platform
        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
        //SDL_RenderDrawLine(renderer, ((SCALED_WIDTH / 2.0f) + edgeShape.m_vertex1.x) * MET2PIX, ((SCALED_HEIGHT / 2.0f) + edgeShape.m_vertex1.y) * MET2PIX, ((SCALED_WIDTH / 2.0f) + edgeShape.m_vertex2.x) * MET2PIX, ((SCALED_HEIGHT / 2.0f) + edgeShape.m_vertex2.y) * MET2PIX);
        SDL_RenderDrawRect(renderer, &groundRect);

        // Draw our Box angle 45
        // Body->SetFixedRotation(true); - sets no rotation at all
        SDL_RenderCopyEx(renderer, texture_box, NULL, &box, angle, NULL, SDL_FLIP_NONE);

        // Draw box angle 45
        //Body->SetAngularVelocity(10.0f);
        //Body->SetFixedRotation(true);
        //SDL_RenderDrawRect(renderer, &box);
        //SDL_RenderFillRect(renderer, &box);

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderPresent(renderer);

        world->Step(1.0f / 60.0f, 8, 3); // update

    }

    world->DestroyBody(Body);
    Body = nullptr;
    world->DestroyBody(groundBody);
    groundBody = nullptr;
    delete world;

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}