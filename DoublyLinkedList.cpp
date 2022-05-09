#include <iostream>
using namespace std;
struct Node
{
public:
    Node *previous;
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    };
};
struct Doubly
{
public:
    Node *head;

public:
    Doubly()
    {
        this->head = NULL;
    }

    void addAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        //      Node *newNode;
        // newNode->next = NULL;
        // newNode->data = data;
        // newNode->previous = NULL;
        if (this->head == NULL)
        {
            this->head = newNode;
            return;
        }
        Node *temp;
        temp = head;
        head = newNode;
        newNode->next = temp;
        temp->previous = newNode;
        //  head->previous = newNode;
        //  newNode->next = head;
        //  head = newNode;
    }
    void addToTheEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->previous = current;
    }
    void insertAfter(Node *node, int data)
    {
        Node *newNode = new Node(data);
        if (node->next == NULL)
        {
            node->next = newNode;
            newNode->previous = node;
            return;
        }
        Node *afterNode = node->next;
        node->next = newNode;
        newNode->previous = node;
        newNode->next = afterNode;
        afterNode->previous = newNode;
    }
    void addNodeBefore(Node *node, int data)
    {
        Node *newNode = new Node(data);
        if (node->previous == NULL)
        {
            node->previous = newNode;
            newNode->next = node;
            head = newNode;
            return;
        }
        Node *beforeNode = node->previous;
        newNode->next = node;
        newNode->previous = beforeNode;
        beforeNode->next = newNode;
        node->previous = newNode;
    }
    void displayFromEnd()
    {
        if (head == NULL)
        {
            cout << "The list can not be empty " << endl;
        }
        else
        {
            Node *tail = head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            while (tail != NULL)
            {
                cout << tail->data << " " << endl;
                tail = tail->previous;
            }
        }
    }
    void displayFromFront()
    {
        if (head == NULL)
        {
            cout << "Empty list" << endl;
            return;
        }
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
    }
};
int main()
{
    Doubly doubly;
    doubly.addAtBeginning(5);
    doubly.addAtBeginning(45);
    doubly.addAtBeginning(78);
    doubly.addAtBeginning(100);
    doubly.addToTheEnd(12);
    doubly.addToTheEnd(80);
    doubly.addToTheEnd(23);
    doubly.displayFromFront();
    cout << endl;
    doubly.displayFromEnd();
    return 0;
}