#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int x = 2; x <= n / 2; x++)
        if (n % x == 0)
            return false;
    return true;
}

int isMagicArray(int *arr, int size)
{
    if (size <= 0)
        return 0;
    int i = 0, primeSum = 0;
    for (i = 0; i < size; i++)
        if (isPrime(arr[i]))
            primeSum += arr[i];
    if (primeSum == arr[0])
        return 1;
    return 0;
}

int isPrimeProduct(int n)
{
    if (isPrime(n))
        return 0;
    for (int i = 2; i <= n / 2; i++)
        if (isPrime(i) && n % i == 0 && isPrime(n / i))
            return 1;
    return 0;
}

int main()
{
    // int arr[] = {13, 4, 4, 4, 4, 4};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << isMagicArray(arr, n);
    cout<<isPrimeProduct(12);
}