#include <iostream>
#include "entity.cpp"

using namespace std;

class Enfermedad : public Entity
{
private:
    string Nombre;

public:
    string setNombre(string);
    string getNombre();
};
string Enfermedad::setNombre(string nombre)
{
    Nombre = nombre;
    return "El nombre de la enfermedad se ha modificado correctamente.";
};
string Enfermedad::getNombre()
{
    return Nombre;
};