#include <iostream>
#include <vector>
using namespace std;

class Student{
    public:
        string imie;
        int wiek;

        Student(string _imie, int _wiek){
            imie = _imie;
            wiek = _wiek;
        }
};
int main(){
    vector<Student> uczniowie;

    uczniowie.push_back(Student("Kuba", 20));
    uczniowie.push_back(Student("Ola", 17));
    uczniowie.push_back(Student("Filip", 15));

    cout << "Uczniowie:" << endl;
    for(int i = 0; i < uczniowie.size(); i++){
        cout << uczniowie[i].imie << "-" << uczniowie[i].wiek << " lat" << endl;
    }
    return 0;
}