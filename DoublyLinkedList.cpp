#include <iostream>
using namespace std;

struct Node
{
public:
    Node *previous;
    int data;
    Node *next;

public:
    Node();
    Node(int data)
    {
        this->previous = NULL;
        this->data = data;
        this->next = NULL;
    }
};

struct DoublyLinkedList
{
public:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }
    Node *addBefore(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return newNode;
        }
        head->previous = newNode;
        newNode->next = head;
        head = newNode;
        return newNode;
    }
    void printFromFront()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *current = new Node();
        while (current != NULL)
        {
            cout << current->data << ", " << endl;
            current = current->next;
        }
    }
};

int main()
{
    DoublyLinkedList lkd;
    lkd.addBefore(1);
    lkd.addBefore(3);
    lkd.addBefore(2);
    lkd.printFromFront();
}