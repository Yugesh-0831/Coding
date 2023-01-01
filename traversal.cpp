#include <iostream>
using namespace std;
 
class node {
    public:
    int data;
    struct node *left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
 
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

void printPreorder(struct node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int main()
{

         cout<<"DSA Lab"<<endl;
  cout<<"Workheet 2.3"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

  
    struct node* root = new node(1);
    root->left = new node(3);
    root->right = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

 
    cout << "\nInorder traversal of binary tree is:  ";
    printInorder(root);

     cout << "\nPreorder traversal of binary tree is: ";
    printPreorder(root);
 
    cout << "\nPostorder traversal of binary tree is: ";
    printPostorder(root);
 
 
 
    return 0;
}
