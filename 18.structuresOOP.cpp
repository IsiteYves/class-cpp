#include <iostream>
#include <windows.h>
using namespace std;

typedef struct StructSTACK
{
    const static int size = 5;
    int top;
    int stack[size];
    void initializeTop()
    {
        top = -1;
    }
    int isFull()
    {
        if (top == size - 1)
            return 1;
        return 0;
    }

    int isEmpty()
    {
        if (top == -1)
            return 1;
        return 0;
    }

    void push(int data)
    {
        if (!isFull())
        {
            top++;
            stack[top] = data;
        }
        else
            cout << "Stack overflow" << endl;
    }

    void pop()
    {
        if (!isEmpty())
            top--;
        else
        {
            system("Color 0A");
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    { // top()
        if (!isEmpty())
            return stack[top];
        return INT_MIN;
    }

    int display()
    {
        cout << "++++++++++++++++++++++++++\n[";
        for (int i = top; i >= 0; i--)
            (i > 0) ? cout << stack[i] << ", " : cout << stack[i];
        cout << "]\n++++++++++++++++++++++++++\n";
    }
} StructSTACK;

int main()
{
    StructSTACK stack1;
    stack1.initializeTop();
    int choice = 6;
    while (choice != 0)
    {
        cout << "## WHAT DO YOU WANT TO DO?" << endl
             << "0. Exit" << endl
             << "1. push" << endl
             << "2. pop" << endl
             << "3. peek/top" << endl
             << "4. display" << endl;
    enteroption:
        cout << "Type your answer: ";
        cin >> choice;
        if (choice < 0 || choice > 4)
        {
            cout << "Wrong choice. Choose again." << endl;
            goto enteroption;
        }
        switch (choice)
        {
        case 1:
            int numberToPush;
            cout << "Enter a number to push: ";
            cin >> numberToPush;
            stack1.push(numberToPush);
            break;
        case 2:
            stack1.pop();
            break;
        case 3:
            cout << "++++++++++++++++++++++++++\n"
                 << stack1.peek() << "\n++++++++++++++++++++++++++\n";
            break;
        case 4:
            stack1.display();
            break;
        default:
            cout << "Halted.";
            break;
        }
    }
}