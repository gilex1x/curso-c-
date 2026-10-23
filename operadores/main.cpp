#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    float resultado = a + b; // Suma de dos enteros
    cout << resultado << endl; // Imprime el resultado de la suma
    resultado = a - b; // Resta de dos enteros
    cout << resultado << endl; // Imprime el resultado de la resta
    resultado = a * b; // Multiplicación de dos enteros
    cout << resultado << endl; // Imprime el resultado de la multiplicación
    resultado = ++a; // Incremento de a
    cout << resultado << endl; // Imprime el valor de a antes del incremento
    a = ;
    cout << sizeof(a) << endl; // Imprime el tamaño en bytes de la variable a
    return 0;
}