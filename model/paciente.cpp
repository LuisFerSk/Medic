#include "entity.cpp"

class Paciente : public Entity
{
public:
    Paciente();
    Paciente(int, string);
    string Nombre;
};
Paciente::Paciente(){};
Paciente::Paciente(int id, string nombre) : Entity(id)
{
    Nombre = nombre;
}