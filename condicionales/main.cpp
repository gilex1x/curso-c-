#include <iostream>

using namespace std;

int main()
{
    int option = 1 ;
    cout << "Ingresa una opcion:" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << option;
        break;
    case 2:
        cout << option;
        break;
    default:
        cout << "Opcion no valida"<<endl;
    }
}