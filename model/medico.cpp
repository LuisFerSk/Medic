#include "entity.cpp"

class Medico : public Entity
{
public:
    Medico();
    Medico(int, string, string);
    string Nombre;
    string Apellido;
};
Medico::Medico(){};
Medico::Medico(int id, string nombre, string apellido) : Entity(id)
{
    Nombre = nombre;
    Apellido = apellido;
};