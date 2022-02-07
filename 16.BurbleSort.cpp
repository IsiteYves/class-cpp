#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 4, 1, 8, 5, 3, 6}, temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Initial: [";
    for (int a = 0; a < n; a++)
    {
        if (a != n - 1)
            cout << arr[a] << ", ";
        else
            cout << arr[a] << "]" << endl;
    }
    cout << "Sorted: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout << "[";
        for (int a = 0; a < n; a++)
        {
            if (a != n - 1)
                cout << arr[a] << ", ";
            else
                cout << arr[a] << "]" << endl;
        }
    }
}