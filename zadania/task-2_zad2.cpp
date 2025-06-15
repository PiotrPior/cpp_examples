#include <iostream>
using namespace std;

bool czyParzysta(int liczba){
    return (liczba % 2 == 0);
}
int main(){
    int liczba = 0;
    cout << "Podaj liczbe (całkowitą): ";
    cin >> liczba;
    if(czyParzysta(liczba)){
        cout << "Liczaba " << liczba << " jest parzysta." << endl;
    }
    else{
        cout << "Liczba " << liczba << " jest nieparzysta." << endl;
    }
    return 0;
}