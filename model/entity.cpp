#include <iostream>

using namespace std;

class Entity
{
protected:
    int Id;

public:
    Entity();
    Entity(int);
    string setId(int);
};
Entity::Entity(){};
Entity::Entity(int id)
{
    Id = id;
};
string Entity::setId(int id)
{
    Id = id;
    return ("Se ha modificado correctamente el id.");
};
