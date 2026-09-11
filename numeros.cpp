#include <iostream>
using namespace std;

int main () {
 int num;

 cout << "Inigresa tu numero: ";
 cin >> num;

 if (num % 2 == 0) {
    cout << "Es par" << endl;
 }
 
 else {
    cout << "Es impar" << endl;
 }

 system("pause");
 return 0;
}

