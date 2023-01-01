
# include <iostream>
#include <queue>
using namespace std;

class Node{
    
public:
    
    int data;
    class Node *left;
    class Node *right;
    
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};


void levelOrder(Node *root){

    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
            Node *current = q.front();
            cout<<current -> data;

            if(current->left != NULL) q.push(current -> left);
            if(current->right != NULL) q.push(current -> right);
            q.pop();
    }

}

int main(){
    
    class Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root-> left ->right = new Node(4);

    levelOrder(root);


    return 0;
}
