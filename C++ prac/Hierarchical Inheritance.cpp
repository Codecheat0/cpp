#include <iostream>
using namespace std;

class A {
public:
    void show_A() {
        cout << "class A" << endl;
    }
};

class B : public A {
public:
    void show_B() {
        cout << "class B" << endl;
    }
};

class C : public A {
public:
    void show_C() {
        cout << "class C" << endl;
    }
};

int main() {
    B b;
    cout << "Calling from B:" << endl;
    b.show_B();
    b.show_A();

    C c;
    cout << "Calling from C:" << endl;
    c.show_C();
    c.show_A();

    return 0;
}
