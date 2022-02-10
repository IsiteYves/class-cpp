#include <iostream>
using namespace std;

struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int size)
    {
        front = 0;
        rear = 0;
        capacity = size;
        queue = new int;
    }
    ~Queue()
    {
        delete queue;
    }
    void enqueue(int data)
    {
        if (isFull())
            return;
        queue[rear] = data;
        rear++;
    }
    void display()
    {
        if (isEmpty())
            return;
        for (int i = front; i < rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        int deletedValue = queue[front];
        for (int i = front; i < rear - 1; i++)
            queue[i] = queue[i + 1];
        rear--;
        cout << "Deleted Item: " << deletedValue << endl;
    }
    int readFront()
    {
        if (isEmpty())
            return 1;
        return queue[front];
    }
    bool isEmpty()
    {
        if (rear == front)
        {
            cout << "Queue is empty" << endl;
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if (rear == capacity)
        {
            cout << "The queue is full." << endl;
            return true;
        }
        return false;
    }
};

int main()
{
    Queue t(10);
    t.enqueue(27);
    t.enqueue(5);
    t.enqueue(13);
    t.enqueue(6);
    t.display();
    t.dequeue();
    t.display();
    int frontVal=t.readFront();
    cout<<"Front val: "<<frontVal<<endl;
}