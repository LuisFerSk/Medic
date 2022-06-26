#include "entity.cpp"
#include "medico.cpp"
#include "paciente.cpp"

class Cita : public Entity
{
public:
    Cita();
    Cita(int, string, string, Medico, Paciente);
    string Hora;
    string Dia;
    int Costo;
    Medico _Medico;
    Paciente _Paciente;
};
Cita::Cita(){};
Cita::Cita(int id, string hora, string dia, Medico medico, Paciente paciente) : Entity(id)
{
    Hora = hora;
    Dia = dia;
    _Medico = medico;
    _Paciente = paciente;
};