#include <iostream>
using namespace std;

int checkCentered(int *arr, int size)
{
    if (size < 3 || size % 2 == 0)
        return 0;
    int mid = (size - 1) / 2;
    for (int x = 0; x < mid; x++)
        if (arr[x] <= arr[mid] || arr[size - x - 1] <= arr[mid])
            return 0;
    return 1;
}

int main()
{
    int arr[] = {6, 2, 2, 1, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << checkCentered(arr, n);
}