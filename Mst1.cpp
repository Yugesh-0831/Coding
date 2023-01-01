#include <iostream>
using namespace std;


class node{
public:

int data;
node* link;

};

void display(node* head){

while(head != NULL){

cout<< head-> data<<" ";
head=head->link;
}
}


int search(node* &head,int x){

    int i=1;

while(head != NULL){

    if(head->data == x){
        return i;
    }
    i++;
    head= head->link;
}
return 0;
}

void deletionatend(node* &head){

    node *h = head;
    
    while(h->link->link !=NULL){
    h=h->link;
    }
    node*new_node = h->link->link;
    h->link=NULL;
    delete new_node;
}


int main(){

node* head= new node();
node* second = new node();
node* third = new node();
node* fourth = new node();

head -> data=6;
head-> link=second;

second-> data= 12;
second-> link = third;

third->data = 18;
third-> link=fourth;

fourth-> data= 24;
fourth-> link=NULL;

cout<<"DSA Lab"<<endl;
  cout<<"MST 1"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;



cout<<"the linked list is: ";
display(head);
cout<<endl;

int x,j;
char n;

while(1){

    cout<<"\nenter 1 for searching and 2 for deletion and q to end the program: ";
cin>>n;

switch(n){

    case 'q':
 cout<<"Program ended";
 goto end;
break;

    case '1':

cout<<"enter the element to found: ";
cin>>x;

 j= search(head,x);

if(j>0){

    cout<<"element found at "<<j<<" position";
}
else{
    cout<<"element not found";
}
break;

case '2':

deletionatend(head);
cout<<"array after deletion is: ";
display(head);
cout<<endl;

break;

default:
cout<<"wrong number entered";
}
}
end:

return 0;
}