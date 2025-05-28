#include <iostream>

using namespace std;

const int ARR_SIZE = 6;

double obliczSrednia(const float tablica[], int size) {
    double suma = 0.0;
    for (int i = 0; i < size; i++) {
        suma += tablica[i];
    }
    return suma / size;
}

void menu(float tablica[], int size) {
    cout << "Podaj " << size << " liczb:" << endl;
    for (int j = 0; j < size; j++) {
        cin >> tablica[j];
    }
}

int main() {
    float tablica[ARR_SIZE];

    menu(tablica, ARR_SIZE);

    double avg = obliczSrednia(tablica, ARR_SIZE);
    cout << "Srednia wprowadzonych liczb: " << avg << endl;

    return 0;
}