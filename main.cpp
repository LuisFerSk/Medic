#include <iostream>
#include "data/usuario/function.cpp"
#include "model/usuario/function.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	UsuarioData usuarioData;
	Usuario usuario;

	do
	{
		do
		{
			system("cls");
			cout << "Ingrese su correo:";
			cin >> usuario.Correo;
			cout << "Ingrese la contraseña:";
			cin >> usuario.Password;
		} while (usuarioData.verificarAcceso(usuario.Correo, usuario.Password));
		int opcion;
		do
		{
			system("cls");
			cout << "\n1. Registrar consulta general.";
			cout << "\n2. Registrar consulta individual.";
			cout << "\n3. Modificar citas.";
			cout << "\n4. Eliminar cita.";
			cout << "\n5. Cerrar SesiÃ³n.";
			cout << "\n\nSelecciones una opción:";
			cin >> opcion;
		} while (opcion != 5);
	} while (true);

	cout << "ok" << endl;

	system("pause");
	return 0;
}
