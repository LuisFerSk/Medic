#include "entity.cpp"

class Enfermedad : public Entity
{
public:
    Enfermedad();
    Enfermedad(string);
    string Nombre;
};
Enfermedad::Enfermedad(){};
Enfermedad::Enfermedad(string nombre)
{
    Nombre = nombre;
};
