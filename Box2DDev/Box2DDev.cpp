#include <iostream>

#include <box2d/box2d.h>

int main()
{
    b2Vec2 gravity(0.0f, -10.0f);
    b2World* world = new b2World(gravity);

    b2BodyDef groundBodyDef;
    groundBodyDef.position.Set(0.0f, -10.0f);
    
    b2Body* groundBody = world->CreateBody(&groundBodyDef);

    b2PolygonShape groundBox;
    groundBox.SetAsBox(50.0f, 10.0f);

    groundBody->CreateFixture(&groundBox, 0.0f);

    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(1.0f, 4.0f);
    bodyDef.angle = 0.25f * b2_pi;
    b2Body* body = world->CreateBody(&bodyDef);
    bodyDef.position.Set(-1.0f, 4.0f);
    bodyDef.angle = 0.75f * b2_pi;
    b2Body* body2 = world->CreateBody(&bodyDef);

    b2PolygonShape dynamicBox;
    dynamicBox.SetAsBox(1.0f, 1.0f);

    b2FixtureDef fixtureDef;
    fixtureDef.shape = &dynamicBox;
    fixtureDef.density = 1.0f;
    fixtureDef.friction = 0.1f;
    fixtureDef.restitution = 0.5f;

    body->CreateFixture(&fixtureDef);
    body2->CreateFixture(&fixtureDef);

    float timeStep = 1.0f / 60.0f;
    int32 velocityInterations = 10;
    int32 positionInterations = 8;

    for (int32 i = 0; i < 120; i++) {
        world->Step(timeStep, velocityInterations, positionInterations);
        b2Vec2 position = body->GetPosition();
        float angle = body->GetAngle();
        printf("1: %4.2f %4.2f %4.2f\n", position.x, position.y, angle);
        b2Vec2 position2 = body2->GetPosition();
        float angle2 = body2->GetAngle();
        printf("2: %4.2f %4.2f %4.2f\n", position2.x, position2.y, angle2);
    }

    world->ClearForces();

    world->DestroyBody(body);
    body = nullptr;
    world->DestroyBody(body2);
    body2 = nullptr;
    world->DestroyBody(groundBody);
    groundBody = nullptr;
    delete world;
    return 0;
}