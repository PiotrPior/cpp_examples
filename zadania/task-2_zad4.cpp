#include <iostream>
using namespace std;

class Punkt2D {
    public:
        float x, y;

        Punkt2D(float _x, float _y) {
            x = _x;
            y = _y;
        }
        void wyswietl(){
            cout << "Punkt: (" << x << ", " << y << ")" << endl;
        }
};
int main(){
    Punkt2D punkt(3.5, 4.2);
    punkt.wyswietl();
    return 0;
}