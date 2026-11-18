#include <iostream>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int num;
        cin >> num;
        int fsnum = num*(num - 1) + 1;
        for (int j = 0; j < num; j++)
        {
            cout << fsnum;
            fsnum = fsnum + 2;
            if (j != num-1)
            {
                cout << "+";
            } 
        }
        cout << endl;
    }
    return 0;
}