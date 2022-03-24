#include <iostream>
using namespace std;

int countOccurrences(int number, int digit)
{
    int count = 0;
    while (number)
    {
        if (number % 10 == digit)
            count++;
        number /= 10;
    }
    return count;
}

int findMaxOccur(int n)
{
    int maxCount = 0, tempN = n, digitMax;
    while (n)
    {
        int i = n % 10;
        int count = countOccurrences(tempN, i);
        if (i != digitMax)
        {
            if (count > maxCount)
            {
                maxCount = count;
                digitMax = i;
            }
            if (count == maxCount)
                digitMax = -1;
        }
        n /= 10;
    }
    return digitMax;
}

int main()
{
    int number = 123322;
    cout << findMaxOccur(number);
}