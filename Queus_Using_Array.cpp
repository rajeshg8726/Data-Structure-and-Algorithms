#include <iostream>
#include <stdlib.h>
using namespace std;

// Queue , it follow first come first serve principles it means that first come first out (FIFO).
// Queue , it also implementd by the two methods , first is By using Array as well as Linked List .

class Queue
{
public:
    int size;
    int front; /// It gives Index of front element .
    int rear;  /// It gives Index of last element .
    int *arr;
};

int Isempty(Queue *ptr)
{

    if (ptr->front == ptr->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Isfull(Queue *ptr)
{

    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(Queue *q, int data)
{

    if (Isfull(q))
    {
        cout << "Queue is Overflow." << endl;
    }
    else
    {
        q->arr[q->rear] = data;
        q->rear++;
    }
    cout << "Element :" << data << endl;
}
int dequeue(Queue *q)
{
    int val = -1;
    if (Isempty(q))
    {
        cout << "Queue is Underflow." << endl;
        return val;
    }
    else
    {
        val = q->arr[q->front];
        q->front++;
        return val;
    }
}

int main()
{

    Queue *Q = (Queue *)malloc(sizeof(Queue));
    Q->arr = (int *)malloc(Q->size * sizeof(int));
    Q->size = 5;
    Q->front = NULL;
    Q->rear = NULL;

    cout << "ENQUEUE ELEMENT IN THE QUEUE IS GIVEN BELOW : " << endl;
    enqueue(Q, 10);
    enqueue(Q, 20);
    enqueue(Q, 30);
    enqueue(Q, 40);
    // enqueue(Q , 10);
    cout << "DEQUEUE ELEMENT IN THE QUEUE IS GIVEN BELOW : " << endl;
    cout << "Element : " << dequeue(Q) << endl;
    cout << "Element : " << dequeue(Q) << endl;

    return 0;
}
