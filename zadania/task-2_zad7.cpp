#include <iostream>
using namespace std;

int main(){
    int liczby[] = {4, 2, 9, 1, 7};
    int maxliczba = liczby[0];

    for(int i = 1; i < 5; i++){
        if(liczby[i] > maxliczba){
            maxliczba = liczby[i];
        }
    }
    cout << "Najwieksza liczba: " << maxliczba << endl;
    return 0;
}