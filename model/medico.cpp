#include <iostream>
#include "entity.cpp"

using namespace std;

class Medico : public Entity
{
private:
    string Nombre;
    string Correo;
    string Password;

public:
    Medico();
    Medico(int, string, string, string);
    string setNombre(string);
    string getNombre();
    string setCorreo(string);
    string getCorreo();
    string setPassword(string);
    string getPassword();
};
Medico::Medico(){};
Medico::Medico(int id, string nombre, string correo, string password) : Entity(id)
{
    Nombre = nombre;
    Correo = correo;
    Password = password;
};
string Medico::setNombre(string nombre)
{
    Nombre = nombre;
    return "Se ha modificado corretamente el nombre del medico.";
};
string Medico::getNombre()
{
    return Nombre;
};
string Medico::setCorreo(string correo)
{
    Correo = correo;
    return "Se ha modificado correctamente el correo del medico.";
};
string Medico::getCorreo()
{
    return Correo;
};
string Medico::setPassword(string password)
{
    Password = password;
    return "Se ha modificado correctamente la contraseña del medico.";
}
string Medico::getPassword()
{
    return Password;
};