#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1,5,9,8,7,5,3,6,5,4,7,8,100,9,6};
    int limit = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0 ;i < limit ; i++){
        if(numbers[i] % 2 == 0){
            cout << "Se encontro un numero par: " << numbers[i] << endl;
        }
    }
}