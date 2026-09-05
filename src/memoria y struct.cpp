#include <iostream>
#include <cstring>

using namespace std;

struct EntidadProyecto
{
    int id;
    char nombre[50];
    float metrica;
};

void cargarDatos(EntidadProyecto* ptr)
{
    cout << "Ingrese ID: ";
    cin >> ptr->id;

    cin.ignore(); // Limpia el buffer de entrada para evitar saltos de línea pendientes

    cout << "Ingrese Nombre: ";
    cin.getline(ptr->nombre, 50);

    cout << "Ingrese Metrica: ";
    cin >> ptr->metrica;
}


void mostrarDatos(const EntidadProyecto* ptr)
{
    cout << "\n--- DATOS CARGADOS CORRECTAMENTE ---" << endl;
    cout << "ID: " << ptr->id << endl;
    cout << "Nombre: " << ptr->nombre << endl;
    cout << "Metrica: " << ptr->metrica << endl;
}

int main()
{
    EntidadProyecto miEntidad;


    cargarDatos(&miEntidad);

   
    mostrarDatos(&miEntidad);

    return 0; 
}