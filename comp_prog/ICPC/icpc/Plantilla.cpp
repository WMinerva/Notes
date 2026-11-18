#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("lectura.txt", "r", stdin);
  freopen("salida.txt", "w", stdout);
#endif
  // 1. mostrar datos
  cout << "Hola Mundo\n" << endl;
  // 2. Leer datos
  long long a;
  cin >> a;
  cout << a << "\n";
  // 3, tipos de datos
  char c = 'a';
  // int, long long, float, double,char, string,pair<>
  string cadena = "Mi orimer programa";
  cout << cadena[0] << ":vocal de la pos \n";
  cadena.push_back('z');
  cout << cadena.size() << ":tamaño cadena\n";
  // 4. iteraciones con bucles
  bool ok = true;
  for (int i = 0; i < 10 && ok == true; i++) {
    if (i == 5) {
      ok = false;
    }

    cout << i << "\n";
  }

  return 0;
}
