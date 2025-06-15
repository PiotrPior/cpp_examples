#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> liczby;
    int n;
    int liczba;

    cout << "Podaj liczbe elementów (liczb): ";
    cin >> n;
    cout << "Podaj daną ilosc elementów: " << endl;
    for(int i = 0; i < n; i++){
        cin >> liczba;
        liczby.push_back(liczba);
    } 

    cout << "Elementy w odwrotnej kolejnmości: " << endl;
    for(int i = n - 1; i >= 0; i--){
        cout << liczby[i] << endl;
    }
    return 0;
}