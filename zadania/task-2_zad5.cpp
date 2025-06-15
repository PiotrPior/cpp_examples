#include <iostream>
using namespace std;
class Licznik{
    private:
        int wartosc;
    public:
        Licznik() : wartosc(0) {}
        void zwieksz(){
            wartosc++;
        }
        void zmniejsz(){
            wartosc--;
        }
        int pobierzWartosc() const {
            return wartosc;
        }

};
int main() {
    Licznik licznik;
    licznik.zwieksz();
    licznik.zwieksz();
    licznik.zmniejsz();

    cout << licznik.pobierzWartosc() << endl;
    return 0;
}