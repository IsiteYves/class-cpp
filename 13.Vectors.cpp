#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {5, 2, 3, 7, 8};
    for (int &i:myVector)
    {
        myVector.push_back(10);
    }
    for (int &i:myVector)
    {
        cout << i << endl;
    }
    return 0;
}
