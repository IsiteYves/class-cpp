#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

struct Queue
{
public:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }
    // Add a new item to the queue
    void enqueue(int data)
    {
        Node *temp = new Node(data);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    // Display all items of the queue
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty.";
            return;
        }
        Node *current = front;
        while (current != NULL)
        {
            cout << current->data << "," << endl;
            current = current->next;
        }
    }
    // Delete first element from a queue
    void dequeue()
    {
        if (front = NULL)
        {
            cout << "Queue is empty.";
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
    }
};

int main()
{
    Queue q1;
    q1.enqueue(13);
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(15);
    q1.display();
    q1.dequeue();
    q1.display();
}