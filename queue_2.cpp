#include <iostream>
using namespace std;
 
class Node {
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
 
class Queue {
      public: 

    Node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void display(){

        cout<<"The queue is: ";

     while(front!= NULL){
      cout<<front->data<<" ";
      front = front->next;
     }
    }

 void enqueue(int x)
    {
 
        Node* temp = NULL;
        temp = new Node(x);
 
   
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
 
        else{
        rear->next = temp;
        rear = temp;
        }
    }
 

    void dequeue()
    {
        
        if (front == NULL)
            return;
 

        Node* temp = front;
        front = front->next;
 
       
        if (front == NULL)
            rear = NULL;
 
        delete (temp);
    }
};
 
int main()
{
 
     cout<<"DSA Lab"<<endl;
    cout<<"Worksheet 3 "<<endl;
    cout<<"Yugesh Jhamb"<<endl;
    cout<<"20BCS5510\n"<<endl;

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();

    q.display();
  

    return 0;
}