#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalkan() final {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan7() {
        cout << "Hallo saya Function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan7();

    return 0;
}