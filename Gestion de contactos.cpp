#include <iostream>
#include <string>
using namespace std;

struct contactoEmail 
{
    string nombresCompletos;
    string genero;
    int edad;
    string numeroTelefonico;
    string email;
    string nacionalidad;
};
void agregar(contactoEmail contacto[], int &cantidad)
{
    cin.ignore();
    cout<<"Ingrese los nombres completos: ";
    getline(cin, contacto[cantidad].nombresCompletos);
    cout<<"Ingrese el genero: ";
    getline(cin, contacto[cantidad].genero);
    cout<<"Ingrese la edad: ";
    cin>>contacto[cantidad].edad;
    cin.ignore();
    cout<<"Ingrese el numero de telefono: ";
    getline(cin, contacto[cantidad].numeroTelefonico);
    cout<<"Ingrese el email: ";
    getline(cin, contacto[cantidad].email);
    cout<<"Ingrese la nacionalidad: ";
    getline(cin, contacto[cantidad].nacionalidad, '\n');
    cantidad++;

    cout<<"\nContacto agregado correctamente."<< endl;
}


int main() 
{
    char opcion;
    const int TAM = 100;
    int cantidad = 0;
    contactoEmail contacto[TAM];
    do 
	{
        cout<<"\nGESTION DE CONTACTOS\n" << endl;
        cout<<"a) Agregar contacto\n";
        cout<<"b) Eliminar un contacto\n";
        cout<<"c) Mostrar listado general de los contactos registrados\n";
        cout<<"d) Mostrar listado general de los contactos existentes, ordenado por servidor de correo de las cuentas\n";
        cout<<"e) Salir del programa\n";
        cout<<endl;
        cout<<"Elija una opcion: ";
		cin>>opcion;
		cout<<endl;
		switch(opcion)
		{
            case 'a': 
			{
				cout<<"AGREGAR CONTACTO: "<<endl;
				agregar(contacto, cantidad);
                break;

            }
        }
    } while (opcion!='e');

    return 0;
}
