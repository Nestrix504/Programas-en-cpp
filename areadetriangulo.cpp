#include <iostream>
using namespace std;

int main () {
  int a, b;
  
  cout << "Ingrese la base del triangulo: ";
  cin >> b;
  
  cout << "Ingrese la altura del triangulo: ";
  cin >> a;
  
  cout << "El area es: " << b * a / 2 << endl;
  
  system("pause");
  return 0;
}
