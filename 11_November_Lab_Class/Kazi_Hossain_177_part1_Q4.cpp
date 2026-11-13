#include <iostream>
using namespace std;

class Smartphone {
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() =0;
    virtual ~Smartphone() {}
};

class Android : public Smartphone {
public:
    void takeSelfie() { cout << "Android: Selfie taken.\n"; }
    void makeCall() { cout << "Android: Call made.\n"; }
};

class IPhone : public Smartphone {
public:
    void takeSelfie() { cout << "iPhone: Selfie taken.\n"; }
    void makeCall() { cout << "iPhone: Call made.\n"; }
};

int main() {
    Smartphone *p1 = new Android(), *p2 = new IPhone();
    p1->takeSelfie();
    p1->makeCall();
    p2->takeSelfie();
    p2->makeCall();
    delete p1;
    delete p2;

    return 10;
}