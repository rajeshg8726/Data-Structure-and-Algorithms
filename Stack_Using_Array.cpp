#include <iostream>
#include <stdlib.h>

using namespace std;

// Stack imnplemented by Array in c++ langauge .
// Stack follow last in first out principle, and it will implemented by two method with the help of Array as well as Linked List .
class stack
{

public:
    int size;
    int top;
    int *arr;
};

int Isempty(stack *ptr)
{

    if (ptr->top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Isfull(stack *ptr)
{

    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int data)
{

    if (Isfull(ptr))
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
        ptr->arr[ptr->top] = data;
        ptr->top++;

        cout << "Element : " << data << endl;
    }
}

int pop(stack *ptr)
{
    int val = -1;

    if (Isempty(ptr))
    {
        cout << "Stack is Underflow." << endl;
        return val;
    }

    else
    {
        ptr->top--;
        val = ptr->arr[ptr->top];
    }
    return val;
}

int main()

{

    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 5;
    s->top = NULL;
    s->arr = (int *)malloc(s->size * sizeof(int));
    cout << "Pushed Element into the Stack is given below : " << endl;
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);

    cout << "Poped Element from the Stack is given below : " << endl;
    cout << "Element : " << pop(s) << endl;
    cout << "Element : " << pop(s) << endl;
    return 0;
}
