#include <iostream>
using namespace std;

int silnia(int n){
    if(n < 0) {
        cout << "Liczba musi być dodatnia" << endl;
        return -1;
    }
    else if (n == 0){
        return 1;
    }
    else {
        int wynik = 1;
        for (int i = 1; i <= n; i++){
            wynik *= i;
        }
        return wynik;
    }
}
int main(){
    int liczba = 0;
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    int wynik = silnia(liczba);
    if(wynik != -1){
        cout << "Silnia z " << liczba << " wynosi: " << wynik << endl;
    } 
    return 0;
}