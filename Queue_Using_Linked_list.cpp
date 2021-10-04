#include <iostream>
#include <stdlib.h>
using namespace std;

// Queue : It is implemented by two method, first is by using Array and second by using Linked List .
// it follow FCFO OR FIFO principle thai is first come first out .
// In Queue , we use two pointing value that is front and rear , and with the help of front , we delete the element from the front,
// and with the help of rear , we insert the element from the last .

class Qnode
{
public:
    int data;
    Qnode *next;
};

Qnode *front = NULL;
Qnode *rear = NULL;

void enqueue(int data)
{
    Qnode *n = (Qnode *)malloc(sizeof(Qnode));
    if (n == NULL)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
}

int dequeue()
{
    int x;
    Qnode *ptr = front;
    if (front == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        front = front->next;
        x = ptr->data;
        free(ptr);
    }

    return x;
}

void showQ(Qnode *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    showQ(front);
    int e1 = dequeue();
    cout << "Removal element is : " << e1 << endl;
    cout << "Removal element is : " << dequeue() << endl;

    return 0;
}
