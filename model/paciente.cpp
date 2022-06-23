#include <iostream>
#include "entity.cpp"

using namespace std;

class Paciente : public Entity
{
private:
    string Nombre;

public:
    Paciente();
    Paciente(int, string);
    string setNombre(string);
    string getNombre();
};
Paciente::Paciente(){};
Paciente::Paciente(int id, string nombre) : Entity(id)
{
    Nombre = nombre;
}
string Paciente::setNombre(string nombre)
{
    Nombre = nombre;
    return "Se ha modificado el nombre del paciente correctamente.";
}
string Paciente::getNombre()
{
    return Nombre;
}