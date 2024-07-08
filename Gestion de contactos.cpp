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
void eliminarContacto(contactoEmail contacto[], int &cantidad, string nombre) 
{
    for (int i=0; i<cantidad; i++) 
	{
        if (contacto[i].nombresCompletos==nombre) 
		{
            for (int j=i; j<cantidad-1; j++) 
			{
                contacto[j]=contacto[j+1];
            }
            cantidad--;
            cout<<"Contacto eliminado." << endl;
            break;
        }
    }
}


int main() 
{
    char opcion;
    const int TAM = 100;
    int cantidad = 3;
    contactoEmail contacto[TAM]= {
	{"Percy Jackson", "Masculino", 25, "123456789", "percy.jackson@gmail.com", "Colombiano"},
	{"Marcos Garcia", "Masculino", 28, "123454321", "marcos.garcia@yahoo.com", "Mexicano"},
	{"Maria Perez", "Femenina", 26, "13579246", "maria.perez@gmail.com"	}
	};
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
		cin.ignore();
		cout<<endl;
		switch(opcion)
		{
            case 'a': 
			{
				cout<<"\nAGREGAR CONTACTO: "<<endl;
				agregar(contacto, cantidad);
                break;

            }
            case 'b': 
			{
                cout<<"\nELIMINAR UN CONTACTO: "<<endl;
                string nombre;
                cout<<"Ingrese el nombre completo del contacto a eliminar: ";
                getline(cin, nombre);
                eliminarContacto(contacto, cantidad, nombre);
                break;
            }
        }
    } while (opcion!='e');

    return 0;
}
