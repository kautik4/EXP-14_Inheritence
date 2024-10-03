#include <iostream>
using namespace std;

class Vehicle {
public:
    string company = "Ford";
    void type() {
        cout << "Fiesta" << endl;
    }
};

class Specs {
public:
    string mileage = "12 kmph";
    void colour() {
        cout << "Red" << endl;
    }
};

class Car: public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {
    Car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;
    
    return 0;
}


/*Output:
Red
Ford Fiesta
(4 seater)
MILEAGE: 12 kmph*/
