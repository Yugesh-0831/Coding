#include<iostream>
using namespace std;
struct node *createnode(int key);
int countnodes(struct node *root);
static int count = 0;
struct node
{
    int info;
    struct node *left, *right;
};
class BST
{
    public:
        struct node *createnode(int key)
        {
            struct node *newnode = new node;
            newnode->info = key;
            newnode->left = NULL;
            newnode->right = NULL;
            return(newnode);
        }
        int countnodes(struct node *root)
        {
            if(root != NULL)
            {
                countnodes(root->left);
                count++;
                countnodes(root->right);
            }
            return count;
        }
};

int main()
{

    cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 2 Q2"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

    BST t1,t2,t3;
    
    struct node *newnode = t1.createnode(123);
    newnode->left = t1.createnode(29);
    newnode->right = t1.createnode(67);
    newnode->left->right = t1.createnode(99);
    newnode->right->left = t1.createnode(29);
 
  
    cout<<"Number of nodes in tree =  "<<t1.countnodes(newnode);

    return 0;
}