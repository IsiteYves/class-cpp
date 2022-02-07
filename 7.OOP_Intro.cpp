// Overload ++ when used as prefix
#include <iostream>
using namespace std;
class Count
{
private:
    int val;

public:
    // constructor to initialize count to 5
    Count() : val(5) {}
    // overload ++ when used as prefix
    void operator*()
    {
        val += 4;
    }
    void display()
    {
        cout << "Count: " << val << endl;
    }
};
int main()
{
    Count count1;
    // call the “void operator ++ ()” function
    *count1;
    count1.display();
    return 0;
}