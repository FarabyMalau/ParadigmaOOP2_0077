#include <iostram>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :
        umur (pUmur)
    {
        cout << "orang dibuat dengan umur " << 
    }
}












class pelajar : public orang {
public:

    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

