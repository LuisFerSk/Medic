#include <iostream>
#include <fstream>

using namespace std;

struct Usuario
{
	string Correo;
	string Password;
};
struct Paciente
{
	int id;
	string Nombre;
};
struct Cita
{
	int id;
	string Hora;
	string Dia;
	int Costo;
	string Medico;
	string Paciente;
};
struct Medico
{
	int id;
	string Nombre;
	string Apellido;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	bool validateLogin = true;
	do
	{
		do
		{
			Usuario usuario;
			Usuario usuarioAuxiliar;
			ifstream archivoLectura;

			system("cls");

			cout << "Ingrese su correo:";
			cin >> usuario.Correo;

			archivoLectura.open("correo.txt", ios::in);

			if (archivoLectura.is_open())
			{
				archivoLectura >> usuarioAuxiliar.Correo;
				archivoLectura.close();
			}

			cout << "Ingrese la contrase�a:";
			cin >> usuario.Password;

			archivoLectura.open("password.txt", ios::in);

			if (archivoLectura.is_open())
			{
				archivoLectura >> usuarioAuxiliar.Password;
				archivoLectura.close();
			}
			if (usuario.Correo != usuarioAuxiliar.Correo | usuario.Password != usuario.Password)
			{
				cout << "\nVerifique el correo y el password.\n\n";
				system("pause");
				continue;
			}
			validateLogin = false;

		} while (validateLogin);

		int opcion;
		do
		{
			ofstream archivoEscritura;

			system("cls");
			cout << "\n1. Registrar consulta general.";
			cout << "\n2. Registrar consulta individual.";
			cout << "\n3. Modificar citas.";
			cout << "\n4. Eliminar cita.";
			cout << "\n5. Cerrar sesión.";
			cout << "\n\nSelecciones una opci�n:";

			cin >> opcion;

			Cita cita;

			switch (opcion)
			{
			case 1:
				system("cls");
				cout << "1. Registrar consulta general.\n";
				cout << "\nDigite la hora de la cita, ejemplo: 10:00 PM << ";
				cin >> cita.Hora;
				cout << "\nDigite el dia de la cita, ejemplo: DD-MM << ";
				cin >> cita.Dia;
				cout << "\nDigite el nombre del medico << ";
				cin >> cita.Medico;
				cout << "\nDigite el nombre del paciente << ";
				cin >> cita.Paciente;

				archivoEscritura.open("citas.txt", ios::out);

				if (archivoEscritura.is_open())
				{
					archivoEscritura << cita.Hora << ";" << cita.Dia << ";" << cita.Medico << ";" << cita.Paciente << ";";
				}
				break;

			default:
				cout << "La opción digitada no es valida.";
				break;
			}

		} while (opcion != 5);
	} while (true);

	system("pause");
	return 0;
}
