#include <iostream>
#include <fstream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    using namespace std;

    struct Estudiante{
string cod;
string ape;
string nom;
string mat;  
        float n1;
        float n2;
        float n3;
        float Dato, DatoAnt;
		float promedio();
	bool buscar(string code);
    bool est();
    bool mejor_prom();
    };
     Estudiante e, aux;
    //*****
    ofstream escritura;
    ifstream lectura;
    ofstream temporal; //Modificar y para eliminar

    int i=0;
 //**FUNCIONES*
    void ingresar(){
   
    system("cls");
        char op='S';
        escritura.open("Fichero.txt",ios::app); //true
        
        if(escritura.fail()){
            cout<<"EL ARCHIVO NO SE PUDO CREAR"<<endl;
        }else{
            while(op=='S'){

                cout<<"Registro: "<<i<<endl;
                cout<<"Codigo del estudiante: ";
                cin>>e.cod;//1010    
               
                if(!e.buscar(e.cod)){
                    cout<<"Ingrese nombre: ";
                    cin>>e.nom;
                    cout<<"Ingrese apellido: ";
                    cin>>e.ape;
                    cout<<"Ingrese materia: ";
                    cin>>e.mat;
                    cout<<"Ingrese nota 1: ";
                    cin>>e.n1;
                    cout<<"Ingrese nota 2: ";
                    cin>>e.n2;
                    cout<<"Ingrese nota 3: ";
                    cin>>e.n3;
                    cout<<"Definitiva: "<<e.promedio()<<endl;
                   
                    
 escritura<<e.cod<<"\t   "<<e.nom<<"\t   "<<e.ape<<"\t   "<<e.mat<<"\t   "<<e.n1<<"\t    "<<e.n2<<"\t    "<<e.n3<<endl;
                    
                    i++;  
                    
                }else{
                    cout<<"el codigo ya existe"<<endl;
                }
               
                cout<<"Desea seguir registrando? s/n "<<endl;
                cin>>op;
                op=toupper(op);
                system("cls");
            }
           
            escritura.close();
           
        }
    }   
  bool Estudiante::buscar(string code) {
        bool find = false;
        lectura.open("Fichero.txt", ios::out|ios::in);
        if (lectura.is_open()) {
            lectura>>aux.cod;//lectura adelantada
            while (!lectura.eof()) {
                lectura>>aux.nom>>aux.ape>>aux.mat>>aux.n1>>aux.n2>>aux.n3;
                if(code==aux.cod ){ //strcmp es una funcion de string.h para comparar cadenas de caracteres
                    find = true;
                }
                lectura>>aux.cod;//lectura adelantada
            }
            lectura.close();
        }
        else cout << "El Fichero no existe / faltan permisos para abrir" << endl;
       
return find;
    }
  
  
void general(){
        system("cls");
        lectura.open("Fichero.txt", ios::out|ios::in);
        if (lectura.is_open()) {
            lectura>>e.cod;
            while (!lectura.eof()) {
                lectura>>e.nom;  
                lectura>>e.ape;
                lectura>>e.mat;
                lectura>>e.n1;
                lectura>>e.n2;
                lectura>>e.n3;
                cout<<"----------------------------------"<<endl;
           
                cout<<"Codigo: "<<e.cod<<endl;
                cout<<"Nombre: "<<e.nom<<endl;
                cout<<"Apellido: "<<e.ape<<endl;
                cout<<"Materia: "<<e.mat<<endl;
                cout<<"Nota 1:"<<e.n1<<endl;
                cout<<"Nota 2:"<<e.n2<<endl;
                cout<<"Nota 3:"<<e.n3<<endl;
                cout<<"Definitiva: "<<e.promedio()<<endl;
                cout<<"Estado: "<<((e.est()) ? "APROBADO" : "REPROBADO" )<<endl;
               // cout<<"el mejor promedio es: "<<e.mejor_prom()<<endl;
                if(e.mejor_prom());

           
                cout<<"----------------------------------"<<endl<<endl;

                lectura>>e.cod;
            }
            lectura.close();
                  cout<<"el mejor promedio es: "<<e.Dato<<endl;

            system("pause");
            cout<<"presione una tecla para continuar..."<<endl;
            system("cls");
        }
        else cout << "El fichero no existe o faltan permisos para abrirlo" << endl;
    }
  
void individual(){
    system("cls");
        bool find = false;
        cout<<"Busqueda individual: "<<endl;
        cout<<"Codigo del estudiante: ";
        cin>>aux.cod;
        lectura.open("Fichero.txt", ios::out|ios::in);
        if (lectura.is_open()) {
            lectura>>e.cod;
            while (!lectura.eof()) {
                lectura>>e.nom>>e.ape>>e.mat>>e.n1>>e.n2>>e.n3;
                if(aux.cod==e.cod){
                    cout<<"----------------------------------"<<endl;
                   
                    cout<<"Codigo: "<<e.cod<<endl;
                    cout<<"Nombre: "<<e.nom<<endl;
                    cout<<"Apellido: "<<e.ape<<endl;
                    cout<<"Materia: "<<e.mat<<endl;
                    cout<<"Nota 1:"<<e.n1<<endl;
                    cout<<"Nota 2:"<<e.n2<<endl;
                    cout<<"Nota 3:"<<e.n3<<endl;
                    cout<<"Definitiva: "<<e.promedio()<<endl;
                    cout<<"Estado: "<<((e.est()) ? "APROBADO" : "REPROBADO" )<<endl;
           
                    cout<<"----------------------------------"<<endl<<endl;

                    find=true;
                }
                lectura>>e.cod;
            }
            lectura.close();
            system("pause");
            cout<<"presione una tecla para continuar..."<<endl;
            system("cls");

            if(!find){
                cout<<"Estudiante no encontrado"<<endl;
            }

        }
        else cout << "El Fichero no existe / faltan permisos para abrirlo" << endl;

    }  
  
 void modificar(){
    system("cls");
        cout<<"Modificar registro de estudiante. "<<endl;
        cout<<"Ingrese Codigo del estudiante: ";
        cin>>e.cod;
        if(e.buscar(e.cod)){
            lectura.open("Fichero.txt", ios::out|ios::in);
            if (lectura.is_open()) {
                temporal.open("auxiliar.txt", ios::app);
                if (!temporal.fail()){
                    lectura>>aux.cod;
                    while (!lectura.eof()) {
                        lectura>>aux.nom>>aux.ape>>aux.mat>>aux.n1>>aux.n2>>aux.n3;
                        if(aux.cod==e.cod){
                        cout<<"estos son los datos del codigo que desea modificar: "<<endl;
                        cout<<"nombre: "<<aux.nom<<endl;
                            cout<<"apellido "<<aux.ape<<endl;
                            cout<<"materia: "<<aux.mat<<endl;
                            cout<<"nota 1: "<<aux.n1<<endl;
                            cout<<"nota 2: "<<aux.n2<<endl;
                            cout<<"nota 3: "<<aux.n3<<endl;
                           
                            cout<<endl<<"por favor, ingrese los datos nuevamente y modifique el que desee.."<<endl;
                            cout<<"Ingrese nuevo nombre: ";cin>>aux.nom;
                            cout<<"Ingrese nuevo apellido: ";cin>>aux.ape;
                            cout<<"Ingrese nueva materia: ";cin>>aux.mat;
                            cout<<"Ingrese nueva nota 1: ";cin>>aux.n1;
                            cout<<"Ingrese nueva nota 2: ";cin>>aux.n2;
                            cout<<"Ingrese nueva nota 3: ";cin>>aux.n3;

                        }
                        temporal<<aux.cod<<" "<<aux.nom<<" "<<aux.ape<<" "<<aux.mat<<" "<<aux.n1<<" "<<aux.n2<<" "<<aux.n3<<endl;
                        lectura>>aux.cod;
                    }
                    lectura.close();
                    temporal.close();
                   
                }else cout<<"archivo auxiliar...error al crear";

                if(remove("fichero.txt")==0) {
                    if(rename("auxiliar.txt","Fichero.txt")==0)// Renombramos el archivo
                        cout<<"Exito al modificar"<<endl;
                    else
                        cout<<"Error al renombrar la modificacion del archivo"<<endl;
                }else
                    cout<<"fallo al eliminar archivo"<<endl;
            }
            else cout << "El fichero no existe o no tiene permisos para su acceso" << endl;
        }else{
            cout<<"estudiante no encontrado"<<endl;
        }
        system("pause");
            cout<<"presione una tecla para continuar..."<<endl;
            system("cls");
    }
 
 void eliminar(){
    system("cls");
    cout<<"Eliminar registro de estudiante: "<<endl;
        cout<<"Ingrese el codigo del estudiante: ";
        cin>>e.cod;
        if(e.buscar(e.cod)){
            lectura.open("Fichero.txt", ios::out|ios::in);
            if (lectura.is_open()) {
                temporal.open("auxiliar.txt", ios::app);
                if (!temporal.fail()){
                bool find;
                    lectura>>aux.cod;
                    while (!lectura.eof()) {
                    find=false;
                        lectura>>aux.nom>>aux.ape>>aux.mat>>aux.n1>>aux.n2>>aux.n3;
                        if(aux.cod==e.cod)
                           find=true;
                       
if(!find)
        temporal<<aux.cod<<" "<<aux.nom<<" "<<aux.ape<<" "<<aux.mat<<" "<<aux.n1<<" "<<aux.n2<<" "<<aux.n3<<endl;
                       
lectura>>aux.cod;
                    }
                    lectura.close();
                    temporal.close();
                }else cout<<"archivo auxiliar..error al crear";

                if(remove("fichero.txt")==0) {
                    if(rename("auxiliar.txt","Fichero.txt")==0){// Renombramos el archivo
                        cout<<"Exito al eliminar"<<endl;
                        i = i - 1;}
                    else
                        cout<<"Error al momento de renombrar el archivo"<<endl;
                }else
                    cout<<"Error al eliminar el archivo"<<endl;
            }
            else cout << "el fichero no existe o no tiene permisos para su acceso" << endl;
        }else{
            cout<<"estudiante no encontrado"<<endl;
        }
        system("pause");
            cout<<"presione una tecla para continuar..."<<endl;
            system("cls");
    }
  
float Estudiante::promedio(){
float prom;
prom = (Estudiante::n1*0.3)+(Estudiante::n2*0.3)+(Estudiante::n3*0.4);
return(prom);
}

bool Estudiante::mejor_prom(){
DatoAnt = Estudiante::promedio();

if(DatoAnt > Dato){
Dato = DatoAnt;
}

return true;
}

bool Estudiante::est(){
return Estudiante::promedio() >= 3.0;
}
    
    int main(){
        int opc=0;
      while (opc < 6){
        cout<<"MENU DE OPCIONES: "<<endl;
            cout<<"1. ingresar datos"<<endl;
            cout<<"2. consulta general "<<endl;
            cout<<"3. Consulta individual "<<endl;
            cout<<"4. Modificar "<<endl;
            cout<<"5. Eliminar"<<endl;
            cout<<"6. Salir "<<endl;
            cout<<"Seleccione una opcion: ";
            cin>>opc;
           
            switch(opc){
                case 1:ingresar();
                    break;
                case 2:general();
                    break;
                case 3:individual();
                    break;
                case 4:modificar();
                    break;
                case 5:eliminar();
                    break;
                case 6:
                    break;

            }

        }
       
         void ingresar();
         void general();
         void individual();
         void modificar();
         void eliminar();
       
       
        return 0;
    }  