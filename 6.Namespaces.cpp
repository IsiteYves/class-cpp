#include "AnimalNames.h"
using namespace AnimalNames;

int main()
{
    int size = (sizeof(cows)) / sizeof(cows[0]);
    string cows[size] = {};
    for (int i = 0; i < size; i++)
    {
        cows[i] = AnimalNames::cows[i];
        cout << "Cow at: " << i << " is: " << cows[i] << endl;
    }
    sayHello();
}