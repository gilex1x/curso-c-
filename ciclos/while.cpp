#include <iostream>

using namespace std;

int main()
{
    char response;
    do{
            cout << "Desea continuar? (y/n): ";
            cin >> response;
    }while (response == 'y');
}