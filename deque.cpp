#include <iostream>
using namespace std;
#define MAX 100

class Deque
{
public:
    int rear;
    int front;
    int size;
    int deque[MAX];

public:
    Deque(int size)
    {
        this->rear = 0;
        this->front = 0;
        this->size = size;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || front == rear + 1)
            return true;
        return false;
    }
    void addToFront(int data)
    {
        if (isFull())
        {
            cout << "Queue overflow." << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
            front = size - 1;
        else
            front--;
        deque[front] = data;
    }
    void addAtRear(int data)
    {
        if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1)
            rear = 0;
        else
            rear++;
        deque[rear] = data;
    }
    void deleteFromFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;
    }
    void deleteFromRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1;
        else if (rear == 0)
            rear = size - 1;
    }
    void display()
    {
        if (front > rear)
        {
            for (int k = front; k <= size - 1;)
                cout << deque[k] << ", ";
            for (int j = 0; j <= rear; j++)
                cout << deque[j] << ", ";
        }
        else
            for (int i = front; i <= rear; i++)
                cout << deque[i] << ", ";
    }
};