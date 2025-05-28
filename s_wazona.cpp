#include <iostream>

using namespace std;

double obliczSrednia(const double tab[], int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += tab[i];
    }
    return sum / n;
}

int main() {
    double tab[6] = {1, 6, 3, 4, 4, 5};
    int n = 6;

    double avg = obliczSrednia(tab, n);
    cout << "Średnia arr: " << avg << endl;

    return 0;
}