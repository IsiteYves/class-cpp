#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myTxt = "Test Text";
    // Replace text;
    string replacedTxt = myTxt.replace(0, 4, "Evaluation");
    cout << replacedTxt << endl;
    return 0;
}
