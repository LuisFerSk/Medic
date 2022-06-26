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
		cout << "Ingrese su correo:" << endl;
		cin >> usuario.Correo;
		cout << "Ingrese la contraseña:" << endl;
		cin >> usuario.Password;

	} while (usuarioData.verificarAcceso(usuario.Correo, usuario.Password));

	cout << "ok";

	system("pause");
	return 0;
}
