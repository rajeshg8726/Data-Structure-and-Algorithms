#include<iostream>
#include<stdlib.h>
using namespace std;


class Tnode{

public:
int data;
Tnode *left;
Tnode * right;

};

Tnode * creating_node(int data)
{

    Tnode *n = (Tnode *)malloc(sizeof(Tnode));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    cout << "Data in Node : " << n->data << endl;
    return n;
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






int main ()
{

Tnode * n =  creating_node(8);
Tnode * n1 = creating_node(10);
Tnode * n2 = creating_node(3);
Tnode * n3 = creating_node(1);
Tnode * n4 = creating_node(14);
Tnode * n5 = creating_node(13);
Tnode * n6 = creating_node(6);
Tnode * n7 = creating_node(4);
Tnode * n8 = creating_node(7);

/*
        8                                       
      /   \
     3    10                <=====>           
    / \     \
   1   6     14
      /  \   /
     4    7  13

*/
n->left = n2;
n->right = n1;
n1->right = n4;
n2->left = n3;
n2->right = n6;
n4->left = n5;
n6->left = n7;
n6->right = n8;

cout << "INORDER TRAVERSAL OF BINARY SEARCH TREE , IT GIVES A ACCENDING ORDER OF SORTED ELEMENT : ";
Inorder_Traversal(n);
cout << " " << endl;


    return 0;
}

















