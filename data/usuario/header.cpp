#include <fstream>
#include <string>

#include "../../model/usuario/function.cpp"

using namespace std;

class UsuarioData
{
public:
    UsuarioData();
    bool verificarAcceso(string, string);
};