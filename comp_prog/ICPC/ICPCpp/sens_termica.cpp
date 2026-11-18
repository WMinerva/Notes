#include <iostream>
using namespace std;
int main(){
    int temp;
    cin >> temp;
    if(temp >= 10 && temp <=30){
        cout << "esta bien";
    } else if (temp < 10){
        cout << "hace frio\n";
        if (temp <= 10){
            cout << "se congela";
        }  
    } else{
        cout << "hace calor\n";
        if (temp >= 100){
            cout << "hierve";
        }  
    }  
    return 0;
}