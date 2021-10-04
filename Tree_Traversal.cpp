#include <iostream>
#include <stdlib.h>
using namespace std;

class Tnode
{
public:
    int data;
    Tnode *left;
    Tnode *right;
};

Tnode *creating_node(int data)
{

    Tnode *n = (Tnode *)malloc(sizeof(Tnode));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    cout << "Data in Node : " << n->data << endl;
    return n;
}

void Preorder_Traversal(Tnode *root)
{
    if (root != NULL)
    {

        cout << root->data;
        Preorder_Traversal(root->left);
        Preorder_Traversal(root->right);
    }
}

void Postorder_Traversal(Tnode *root)
{
    if (root != NULL)
    {

        Postorder_Traversal(root->left);
        Postorder_Traversal(root->right);
        cout << root->data;
    }
}
void Inorder_Traversal(Tnode *root)
{

    if (root != NULL)
    {
        Inorder_Traversal(root->left);
        cout << root->data;
        Inorder_Traversal(root->right);
    }
}
int main()
{

    Tnode *t = creating_node(1);
    Tnode *t1 = creating_node(5);
    Tnode *t2 = creating_node(3);
    Tnode *t3 = creating_node(4);

    t->left = t1;
    t->right = t2;
    t1->right = t3;
    cout << "PreOreder : ";
    Preorder_Traversal(t);

    cout << endl;
    cout << "PostOreder : ";
    Postorder_Traversal(t);
    cout << endl;
    cout << "InOreder : ";
    Inorder_Traversal(t);
    cout << endl;

    return 0;
}
