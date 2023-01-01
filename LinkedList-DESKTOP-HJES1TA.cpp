#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* link;
};

void deletion(node* &head,int value){

node *h;
h=head;
while(h->link->data != value){
    h=h->link;
}
node * ptr;
ptr= h->link;
h->link=h->link->link;
delete ptr;
}

void display(node* head){

while(head != NULL){
cout<<head->data<<" ";
head= head->link;
}
}


int main(){

    node* head= new node();
    node*second= new node();
    node*third= new node();
    head->data= 5;
    head->link=second;
    second->data=10;
    second->link=third;
    third->data=15;
    third->link= NULL;

    deletion(head,5);

     display(head);

    return 0;
}

 