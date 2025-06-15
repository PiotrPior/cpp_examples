#include <iostream>
using namespace std;

int main(){
    float waga = 0;
    float wzrost = 0;
    cout << "Podaj wagę w kg: ";
    cin >> waga;
    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;
    float bmi = waga / (wzrost * wzrost);
    cout << "Twoje BMI to: " << bmi << endl;

    return 0;
}