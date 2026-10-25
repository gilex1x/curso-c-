#include <iostream>

using namespace std;

int suma(int a, int b){
    return a + b;
}

int multiplicacion(int a, int b){
    return a * b;
}

int main()
{
    int num1, num2;
    cout << "Ingresa el primer numero:" << endl;
    cin >> num1;
    cout << "Ingresa el segundo numero:" << endl;
    cin >> num2;
    cout << "La suma es: " << suma(num1, num2) << endl;
    cout << "La multiplicacion es: " << multiplicacion(num1, num2) << endl;
    return 0;
}