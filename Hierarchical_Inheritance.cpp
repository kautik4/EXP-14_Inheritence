#include <iostream>
#include <string>
using namespace std;

class Jeans {
public:
    string type[3] = {"Bootcut", "WideLeg", "Skinny"};
    void brand() {
        cout << "Brand: H&M - &Denim" << endl;
    }
};

class Bootcut : public Jeans {
public:
    string color = "Dark Blue";
};

class WL : public Jeans {
public:
    string color = "Light Blue";
};

class Skinny : public Jeans {
public:
    string color = "Black";
};

int main() {
    Bootcut j1;
    WL j2;
    Skinny j3;

    cout << endl;
    j1.brand();
    cout << j1.type[0] << ": " << j1.color << endl;

    j2.brand();
    cout << j2.type[1] << ": " << j2.color << endl;

    j3.brand();
    cout << j3.type[2] << ": " << j3.color << endl;

    return 0;
}


/*Output:
Brand: H&M - &Denim
Bootcut: Dark Blue
Brand: H&M - &Denim
WideLeg: Light Blue
Brand: H&M - &Denim
Skinny: Black*/