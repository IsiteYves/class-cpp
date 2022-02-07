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

Gender stringToEnumConverter(string gender)
{
    if (gender == "MALE")
        return MALE;
    else if (gender == "FEMALE")
        return FEMALE;
    else
        return OTHER;
}

int main()
{
    string names;
    int age, peopleNum;
    string gender;
    cout << "How many people: ";
    cin >> peopleNum;
    Person peopleList[peopleNum];
    for (int i = 0; i < peopleNum; i++)
    {
        cout << "\n\nPerson" << i + 1 << '"s names: ';
        cin >> names;
        cout << endl
             << "Enter Age: ";
        cin >> age;
        cout << endl
             << "Enter gender: ";
        cin >> gender;
        peopleList[i].names = names;
        peopleList[i].age = age;
        peopleList[i].gender = stringToEnumConverter(gender);
    }
    cout << "\n\nList of people you entered: ";
    for (int j = 0; j < peopleNum; j++)
        cout << "\n"
             << peopleList[j].names << " " << peopleList[j].age << " " << enumToStringConverter(peopleList[j].gender);
}