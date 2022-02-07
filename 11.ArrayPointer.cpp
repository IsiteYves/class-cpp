#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 2, 3, 7, 17};
    int *p;
    p = array;
    int i = 0;
    while (*(p + i))
    {
        cout << "Item at " << i << ": " << *(p + i) << endl;
        i++;
    }
}