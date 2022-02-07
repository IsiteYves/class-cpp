#include <iostream>
using namespace std;

class EncapsulationKilled
{
private:
    int x = 10;

public:
    int readX() { return x; }

public:
    int *exposex()
    {
        return &x;
    }
};

int main()
{
    EncapsulationKilled killed;
    int *k = killed.exposex();
    *k = 5;
    cout << "Print killed.x: " << killed.readX() << endl;
}