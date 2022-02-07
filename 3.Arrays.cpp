#include <iostream>
using namespace std;

int main()
{
    int numbers;
    cout << "How many numbers do you need: ";
    cin >> numbers;
    int myArr[numbers];
    cout << "Enter five numbers: \n";
    for (int i = 0; i < numbers; i++)
    {
        cout << "Arr[" << i << "]: " << endl;
        cin >> myArr[i];
    }
    cout << "\nNumbers you entered: \n";
    for (int j = 0; j < numbers; j++)
        cout << " " << j[myArr] << endl;
    return 0;
}
