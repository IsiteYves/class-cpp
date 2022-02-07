#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 0, 7, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, p;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        p = i - 1;
        for (; p >= 0 && arr[p] > key; p--)
            arr[p + 1] = arr[p];
        arr[p + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}