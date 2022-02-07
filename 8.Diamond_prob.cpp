#include <iostream>
using namespace std;

class A
{
public:
    string value = "Str A";

public:
    A()
    {
        cout << "A called" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B called" << endl;
    }
    void printVal() { cout << "B value" << endl; }
};

class C : public A
{
public:
    C()
    {
        cout << "C called" << endl;
    }
    void printVal() { cout << "C value" << endl; }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D called" << endl;
    }
};

int main()
{
    B b1;
    cout << b1.value << endl;
    return 0;
}