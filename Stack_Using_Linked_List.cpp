#include <iostream>
#include <stdlib.h>
using namespace std;

class stack
{
public:
    int data;
    stack *next;
};

stack *top = NULL;

int isempty(stack *s)
{
    if (s == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(stack *top)
{
    stack *p = (stack *)malloc(sizeof(stack));

    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

stack *push(stack *n, int data)
{

    n = (stack *)malloc(sizeof(stack));
    if (isfull(n))
    {
        cout << "Stack is Overflow." << endl;
    }
    else
    {
        n->data = data;
        n->next = top;
        top = n;
    }
    return top;
}

int pop(stack *tp)
{

    int val;
    // tp = (stack *)malloc(sizeof(stack));
    if (isempty(tp))
    {
        cout << "Stack is Underflow." << endl;
    }
    else
    {

        stack *n = tp;
        top = tp->next;
        val = n->data;
        free(n);
    }

    return val;
}

void ShowStack(stack *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int stackTop(stack *t)
{

    return (t->data);
}

int stackBottom(stack *b)
{

    while (b->next != NULL)
    {
        b = b->next;
    }
    return (b->data);
}
int main()
{

    cout << "Pushed element into the stack is given below :" << endl;
    cout << isempty(top) << endl;
    cout << isfull(top) << endl;
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    ShowStack(top);
    cout << "Poped element from the stack is given below : " << endl;
    int e1 = pop(top);
    cout << "Element : " << e1 << endl;
    cout << "Top most element of the stack is : " << stackTop(top) << endl;
    cout << "Bottom most element of the stack is : " << stackBottom(top) << endl;
    return 0;
}
