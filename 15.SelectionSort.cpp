#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many elements: ";
    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Input: [";
    for (int j = 0; j < n; j++)
    {
        if (j != n - 1)
            cout << arr[j] << ", ";
        else
            cout << arr[j];
    }
    cout << "]" << endl;
    for (int x = 0; x < n - 1; x++)
    {
        int min_index = x, temp;
        for (int y = x + 1; y < n; y++)
            if (arr[y] < arr[min_index])
                min_index = y;
        // swap
        if (x != min_index)
        {
            temp = arr[x];
            arr[x] = arr[min_index];
            arr[min_index] = temp;
        }
        cout << "Sorted: [";
        for (int a = 0; a < n; a++)
        {
            if (a != n - 1)
                cout << arr[a] << ", ";
            else
                cout << arr[a];
        }
        cout << "]" << endl;
    }
}