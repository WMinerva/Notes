#include <iostream>
using namespace std;
int main(){
    int lista[14] = {2, -3, 8, -4, 2, 3, 3, -7, 2, -5, -4, -3, 2, 7};
    int max = lista[0];
    // cout << sizeof(lista) << endl;
    for (int i = 0; i < sizeof(lista)/ sizeof(int); i++)
    {
       if (lista[i] > max){
        max = lista[i];
        }
    }
    //cout << sizeof(lista)/ sizeof(int) << endl;
    cout << max << endl;

    return 0;
}