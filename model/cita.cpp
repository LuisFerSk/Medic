#include <iostream>
#include "entity.cpp"
#include "medico.cpp"
#include "paciente.cpp"

using namespace std;

class Cita : public Entity
{
private:
    string Hora;
    string Dia;
    int Costo;
    Medico _Medico;
    Paciente _Paciente;

public:
    Cita();
    Cita(int, string, string, Medico, Paciente);
    string setHora(string);
    string getHora();
    string setDia(string);
    string getDia();
    string setCosto(int);
    int getCosto();
    string setMedico(Medico);
    Medico getMedico();
    string setPaciente(Paciente);
    Paciente getPaciente();
};
Cita::Cita(){};
Cita::Cita(int id, string hora, string dia, Medico medico, Paciente paciente) : Entity(id)
{
    Hora = hora;
    Dia = dia;
    _Medico = medico;
    _Paciente = paciente;
};
string Cita::setHora(string hora)
{
    Hora = hora;
    return "La hora de la cita se ha modificado correctamente.";
};
string Cita::getHora()
{
    return Hora;
};
string Cita::setDia(string dia)
{
    Dia = dia;
    return "El dia de la cita se ha modificado correctamente.";
};
string Cita::getDia()
{
    return Dia;
};
string Cita::setCosto(int costo)
{
    Costo = costo;
    return "El costo de la cita se ha modificado correctamente.";
};
int Cita::getCosto()
{
    return Costo;
};
string Cita::setMedico(Medico medico)
{
    _Medico = medico;
    return "El medico de la cita se ha modificado correctamente.";
};
Medico Cita::getMedico()
{
    return _Medico;
};
string Cita::setPaciente(Paciente paciente)
{
    _Paciente = paciente;
    return "El paciente de la cita se ha modificado correctamente.";
};
Paciente Cita::getPaciente()
{
    return _Paciente;
};
