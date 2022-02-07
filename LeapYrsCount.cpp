// C++ implementation to find the
// count of leap years in given
// range of the year

#include <bits/stdc++.h>

using namespace std;

// Function to calculate the number
// of leap years in range of (1, year)
int calNum(int year)
{
	return (year / 4) - (year / 100) +
		   (year / 400);
}

// Function to calculate the number
// of leap years in given range
void leapNum(int l, int r)
{
	l--;
	int num1 = calNum(r);
	int num2 = calNum(l);
	cout << num1 - num2 << endl;
}

// Driver Code
int main()
{
	// int l1 = 1, r1 = 400;
	// leapNum(l1, r1);

	int l2 = 2015, r2 = 2022;
	leapNum(l2, r2);

	return 0;
}
