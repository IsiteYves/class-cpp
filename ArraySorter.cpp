#include <iostream>
using namespace std;

int *arraySorter(int *arr, int len)
{
    int key, p, n = len;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        p = i - 1;
        for (; p >= 0 && arr[p] > key; p--)
        {
            arr[p + 1] = arr[p];
        }
        arr[p + 1] = key;
    }
    return arr;
}

int output(int size, int outputArr[])
{
    cout << "Output: [";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << *(outputArr + i) << ", ";
        }
        else
        {
            cout << *(outputArr + i);
        }
    }
    cout << "]";
}

int main()
{
    // int arr[] = {5, 3, 0, 7, 1, 2, 2};
    int n;
    cout << "How many numbers do you want: ";
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cout << "arr[" << x << "]: ";
        cin >> arr[x];
    }
    cout << "Input Array: [";
    for (int y = 0; y < n; y++)
    {
        if (y != n - 1)
            cout << arr[y] << ", ";
        else
            cout << arr[y];
    }
    cout << "]" << endl;
    int *sorted = arraySorter(arr, n);
    output(n, sorted);
}