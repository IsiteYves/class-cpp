#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void addNewNode(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    void displayNode()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void deleteNode(int position)
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }
        else
        {
            if (position == 1)
            { // Delete head;
                Node *temp = head;
                head = head->next;
                delete temp;
            }
            else
            {
                int size = 0;
                Node *current = head;
                while (current != NULL)
                {
                    size++;
                    current = current->next;
                }
                if (size < position)
                {
                    cout << "Invalid operation";
                    return;
                }
                current = head;
                Node *previous;
                while (position > 1)
                {
                    position--;
                    previous = current;
                    current = current->next;
                    return;
                }
                previous->next = current->next;
                delete current;
            }
        }
    }
};

int main()
{
    LinkedList linked1;
    linked1.addNewNode(5);
    linked1.addNewNode(12);
    linked1.addNewNode(18);
    linked1.addNewNode(3);
    linked1.addNewNode(2.8);
    linked1.displayNode();
    cout << "======================" << endl;
    linked1.deleteNode(1);
    linked1.displayNode();
}