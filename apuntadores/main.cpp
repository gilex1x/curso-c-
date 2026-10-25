#include <iostream>
#include <string>

using namespace std;

int main()
{
    int direccion = 1258;
    int segundaDireccion = 1259;
    cout << direccion << endl;

    int* apuntadorDireccion = &direccion;
    *apuntadorDireccion = 8521;
    cout << "Direccion de memoria: " << apuntadorDireccion << endl;
    cout << "Valor de la direccion: " << *apuntadorDireccion << endl;
    apuntadorDireccion = &segundaDireccion;
    cout << segundaDireccion << endl;
    cout << "Direccion de memoria: " << apuntadorDireccion << endl;
    return 0;
}