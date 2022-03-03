#include <iostream>
using namespace std;

int search(int *arr, int n, int x)
{
    int lo = 0;
    int hi = n - 1;
    int pos = lo + (x - arr[lo]) * (hi - lo) / (arr[hi] - arr[lo]);
    while (lo <= hi)
    {
        if (x == arr[pos])
        {
            return pos;
        }
        else if (arr[pos] > x)
        {
            hi = pos - 1;
        }
        else
        {
            lo = pos + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[0]);
    cout << search(array, size, 10) << endl;
}