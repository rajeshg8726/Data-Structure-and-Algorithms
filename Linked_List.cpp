#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAttail(Node *&head, int val)
{

    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *ptr = head;
    while (ptr->next != NULL)
    {

        ptr = ptr->next;
    }

    ptr->next = n;
}

void ShowList(Node *head)
{

    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void InseartAtfirst(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}





int main()
{

    Node *head = NULL;

    InsertAttail(head, 10);
    InsertAttail(head, 20);
    // InsertAttail(head , 30);
    // InsertAttail(head , 40);
    // InsertAttail(head , 50);
    // InsertAttail(head , 60);
    InseartAtfirst(head, 50);
    ShowList(head);

    return 0;
}






