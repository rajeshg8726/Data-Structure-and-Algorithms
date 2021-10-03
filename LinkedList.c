#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void ShowList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int val)
{

    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = val;
    n->next = head;
    head = n;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *two;
    struct Node *three;

    head = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = two;

    two->data = 20;
    two->next = three;

    three->data = 30;
    three->next = NULL;

    ShowList(head);
    head = insertAtFirst(head, 40);
    ShowList(head);

    return 0;
}
