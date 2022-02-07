#include <iostream>
using namespace std;

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};
struct Person
{
    string names;
    int age;
    Gender gender;
};

string enumToStringConverter(Gender gender)
{
    if (gender == MALE)
        return "MALE";
    else if (gender == FEMALE)
        return "FEMALE";
    else
        return "OTHER";
}

int main()
{
    Person P1 = {"IGOR", 20, MALE};
    string genders[3];
    genders[0] = "Male";
    genders[1] = "Female";
    genders[2] = "Other";
    cout << "Names: " << P1.names << " Age: " << P1.age << " Gender: " << enumToStringConverter(P1.gender) << endl;
}