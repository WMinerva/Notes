#include <iostream>
using namespace std;
int main(){
    int seg = 0, min = 0, hora = 0;
    int num;
    cin >> num;
    seg = num % 60;
    num = num - seg;
    min = num % 3600;
    num = num - min;
    min = min / 60;
    hora = num / 3600;
    cout << hora << " " << min << " "  << seg << endl;
    return 0;
}