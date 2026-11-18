#include <iostream>
using namespace std;
int main (){
    int peni, chelin, libra , num;
    cin >> num;
    libra = num / 240;
    num = num % 240;
    chelin = num / 12;
    peni = num % 12;
    int array[3] = {libra, chelin, peni};
    cout << "(" << libra << ", " << chelin << ", "  << peni << ")"<< endl;
    return 0;
}