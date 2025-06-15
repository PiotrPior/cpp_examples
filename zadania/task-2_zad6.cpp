#include <iostream>
using namespace std;

int main(){
    int oceny[5];
    int suma = 0;
    cout << "Podaj 5 ocen" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Ocena " << i + 1 << ": ";
        cin >> oceny[i];
        suma += oceny[i];
    }
    double srednia = suma / 5;
    cout << "Srednia ocen: " << srednia << endl;
    return 0;
}