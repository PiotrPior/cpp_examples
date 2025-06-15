#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> liczby;
    int liczba;
    cout << "Podaj liczby (0 aby skończyć): " << endl;
    while(true){
        cin >> liczba;
        if(liczba == 0){
            break;
        }
        liczby.push_back(liczba);
    }
    int suma = 0;
    for(int i = 0; i < liczby.size(); i++){
        suma += liczby[i];
    }
    cout << "Suma 1liczb: " << suma << endl;
    return 0;
}