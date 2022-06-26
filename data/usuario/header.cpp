#include <fstream>
#include <string>

#include "../../model/usuario/function.cpp"

class UsuarioData
{
private:
    string NombreArchivo = "../data/usuario.txt";

public:
    UsuarioData();
    bool verificarAcceso(string, string);
};