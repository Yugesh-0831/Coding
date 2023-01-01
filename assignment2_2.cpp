#include <iostream>
#define n 100
using namespace std;

class queue{

    char *arr;
    int front,back;

public:
    queue(){
        front=-1;
        back=-1;
        arr = new char[n];
    }

void enqueue(char x){
    if(back==n-1){
        cout<<"queue overflow !!";
    }
    else{
        back++;
        arr[back]=x;
    }
    if(front==-1){
        front++;
    }
}

void dequeue(){
    if(front==-1){
        cout<<"queue is empty !!";
    }
    else{
        front++;
        }
}

void display(){
    int x=1;
    for(int i=front;i<=back;i++){
        cout<<x<<"->"<<arr[i]<<" ";
        x++;
    }
}

};


int main(){

    cout<<"DSA Lab"<<endl;
    cout<<"Assignment 2 Q2"<<endl;
    cout<<"Yugesh Jhamb"<<endl;
    cout<<"20BCS5510\n"<<endl;

queue q;

q.enqueue('A');
q.enqueue('B');
q.enqueue('C');
q.enqueue('D');
q.enqueue('E');
q.enqueue('F');
cout<<"\n(a). ";
q.display();

q.dequeue();
q.dequeue();
cout<<"\n(b). ";
q.display();

q.enqueue('G');
cout<<"\n(c). ";
q.display();

q.enqueue('H');
cout<<"\n(d). ";
q.display();

q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();
cout<<"\n(e). ";
q.display();

q.enqueue('I');
cout<<"\n(f). ";
q.display();

    return 0;
}