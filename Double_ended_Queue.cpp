#include <iostream>
#include <stdlib.h>
using namespace std;

//  Double ended queue means that is , we will perform all operations by using only one pointer
//  for exmaple we use ony front for inserting as well as deleting the element in the queue.
class Qnode
{
public:
    int data;
    Qnode *next;
};
Qnode *front = NULL;
Qnode *rear = NULL;

void Enqueue(int val)
{

    Qnode *n = (Qnode *)malloc(sizeof(Qnode));
    if (n == NULL)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        n->data = val;
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

// int Dequeue ()
// {
// int x;
// Qnode * ptr = front;
// if (front == NULL)
// {
//     cout << "Queue is empty." << endl;
// }
// else
// {
//     front = front->next;
//     x = ptr->data;
//     free(ptr);
// }

// return x;

// }

int Dequeue()
{
    int x;
    Qnode *ptr = rear;
    if (rear == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        rear = rear->next;
        x = ptr->data;
        free(ptr);
    }

    return x;
}

void ShowQ(Qnode *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    ShowQ(rear);

    cout << "Removal element is : " << Dequeue() << endl;
    cout << "Removal element is : " << Dequeue() << endl;

    return 0;
}
