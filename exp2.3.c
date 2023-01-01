#include <stdio.h>
#include <stdlib.h>

//creating stucture for node
struct node
{
    int info;
    struct node *left, *right;
};

//creating stucture for child nodes
struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}

static int count = 0;

//function to count the nodes
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

//main function
int main()
{
    printf("DSA Lab\n");
    printf("Worksheet 2 Q2\n");
    printf("Yugesh Jhamb\n");
    printf("20BCS5510\n\n");

    // Creating the Tree.
    struct node *newnode = createnode(100);
    newnode->left = createnode(51);
    newnode->right = createnode(61);
    newnode->left->left = createnode(17);
    newnode->left->right = createnode(11);
    newnode->right->left = createnode(28);
    newnode->right->right = createnode(7);

    printf("Number of nodes in the tree are = %d ",countnodes(newnode));
    
    return 0;
}