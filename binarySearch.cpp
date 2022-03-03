#include <iostream>
using namespace std;

int search(int *array, int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == array[mid])
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[0]);
    cout << search(array, size, 12) << endl;
}