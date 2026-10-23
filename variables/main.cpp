#include <iostream>

using namespace std;

int main() {
    /*Variables en c++
        bool: tipo de dato booleano, puede ser true o false-> 4bytes
        char: tipo de dato caracter, puede almacenar un solo caracter-> 1byte
        int: tipo de dato entero, puede almacenar numeros enteros-> 4bytes
        float: tipo de dato flotante, puede almacenar numeros con decimales-> 4bytes
        double: tipo de dato doble, puede almacenar numeros con decimales de mayor precision-> 8bytes
        long: tipo de dato entero largo, puede almacenar numeros enteros de mayor rango-> 8bytes
        short: tipo de dato entero corto, puede almacenar numeros enteros de menor rango-> 2bytes
    */

    int edad = 25;
    const char letra = 'A';// No se modifica
    cout << "Hola, mundo!" << endl;
    cout << "Mi edad es: " << edad << endl;
    cout << "La letra es: " << letra << endl;
    return 0;
}