#include <iostream>
using namespace std;

int main()
{
    // int a = 5, b = 6;
    // int *d;
    // d = &a;
    // *d = b;
    // cout << "Memory address: " << d << endl;
    // cout << "Value: " << a << endl;
    int k = 10;
    int *x;
    x = &k;
    // for (int n = 0; n < 20; n++)
    // {
    //     int *mem = x + n;
    //     *mem = 10 + n;
    // }
    for (int a = 0; a < 100; a++)
    {
        int *mem;
        mem = x + a;
        *mem = 6;
        cout << "Memory: " << mem << " value: " << *mem << endl;
    }
}