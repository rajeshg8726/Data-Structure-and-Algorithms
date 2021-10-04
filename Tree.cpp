#include <iostream>
#include <stdlib.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;
};

Tree *Creating_Node(int data)
{
    Tree *n;
    n = (Tree *)malloc(sizeof(Tree));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    cout << "Data in Node : " << n->data << endl;
    return n;
}

int main()

{

    Tree *t1 = Creating_Node(10);
    Tree *t2 = Creating_Node(20);
    Tree *t3 = Creating_Node(30);
    Tree *t4 = Creating_Node(40);
    t1->left = t2;
    t1->right = t3;

    cout << t1->left->data << endl;
    cout << t1->right->data << endl;

    return 0;
}
