#include <iostream>
#include <string>

using namespace std;

int main()
{
    string edad;
    string name;
    cout << "Ingresa tu nombre:" << endl;
    cin >> name;
    cout << "Ingresa tu edad:" << endl;
    cin >> edad;
    cout << "Hola " << name << "Tu nombre tiene " << name.length() << " caracteres" << endl;
    cout << "Tu edad es: " << stoi(edad) << endl;
    return 0;
}