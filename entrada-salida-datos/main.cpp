#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "Ingresa tu edad:" << endl;
    cin >> edad;
    if (edad < 18 || edad > 50){
        cout << "no puedes votar" << endl;
    }else{
        cout << "puedes votar" << endl;
    }
    return 0;
}