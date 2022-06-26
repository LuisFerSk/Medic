#pragma once

#include "header.cpp"

UsuarioData::UsuarioData(){};

bool UsuarioData::verificarAcceso(string correo, string password)
{
    ifstream archivo;

    archivo.open(NombreArchivo, ios::in);

    if (archivo.fail())
    {
        archivo.close();
        return false;
    }

    Usuario usuario;

    getline(archivo, usuario.Correo);
    if (correo != usuario.Correo)
    {
        archivo.close();
        return false;
    }
    getline(archivo, usuario.Password);
    if (password != usuario.Password)
    {
        archivo.close();
        return false;
    }
    archivo.close();
    return true;
}
