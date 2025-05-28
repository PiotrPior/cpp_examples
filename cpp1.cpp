#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Podaj liczbę: ";
    cin >> n;

    if (n < 2) {
        cout << "To nie jest liczba pierwsza!";
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << "To nie jest liczba pierwsza!";
                return 0;
            }
        }
        cout << "To jest liczba pierwsza!";
    }
    return 0;
}