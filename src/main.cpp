
#include <iostream>
using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; 

    cout << "=====================================================" << endl;
    cout << "   CONTROL DE ACCESO RAM - ESTUDIANTE: FERRARI ULISES " << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese su edad: ";
    
    cin >> *p; 
    
    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;
    
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }
    
    cout << "=====================================================" << endl;
    return 0; 
}