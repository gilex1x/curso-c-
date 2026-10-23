#include <iostream>

using namespace std;

int main() {
    
    int listaEdades[] = {25, 30, 35, 40, 45};
    cout << listaEdades[0] << endl; // Imprime el primer elemento del arreglo 
    listaEdades[0] = 26; // Modifica el primer elemento del arreglo
    cout << listaEdades[0] << endl; // Imprime el primer elemento del
    return 0;
}