#include <iostream>
#include <windows.h>
using namespace std;

class OOPStack
{
private:
    const static int size = 2;
    int top;
    int stack[size];

public:
    OOPStack()
    {
        this->top = -1;
    }
    int isFull()
    {
        if (this->top == size - 1)
            return 1;
        return 0;
    }

    int isEmpty()
    {
        if (this->top == -1)
            return 1;
        return 0;
    }

    void push(int data)
    {
        if (!isFull())
        {
            this->top++;
            this->stack[this->top] = data;
        }
        else
            cout << "Stack overflow" << endl;
    }

    void pop()
    {
        if (!isEmpty())
            this->top--;
        else
        {
            system("Color 0A");
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    { // top()
        if (!isEmpty())
            return this->stack[this->top];
        return INT_MIN;
    }

    int display()
    {
        cout << "++++++++++++++++++++++++++\n[";
        for (int i = this->top; i >= 0; i--)
            (i > 0) ? cout << this->stack[i] << ", " : cout << this->stack[i];
        cout << "]\n++++++++++++++++++++++++++\n";
    }
};

int main()
{
    OOPStack stack1;
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