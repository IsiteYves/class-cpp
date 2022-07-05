#include <iostream>
#include <time.h>
using namespace std;

struct sec
{
    int a;
    int b;
};

int main()
{
    struct sec s =
        {
            25,
            50};
    struct sec *ps = (struct sec *)&s;
    cout << ps->a << ps->b << endl;
    return 0;
}