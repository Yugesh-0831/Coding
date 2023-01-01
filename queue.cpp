#include <iostream>
#define n 10
using namespace std;

class queue{

    int *arr;
    int front,back;

public:
    queue(){
        front=-1;
        back=-1;
        arr = new int[n];
    }

    void insertatstart(int x){
   if(back==n-1){
       cout<<"queue overflow !!";
   }
   else{
       back++;
       for(int i=back+1;i>0;i--){
       arr[i]=arr[i-1];
       }
       arr[0]=x;
   }
   if(front==-1){
        front++;
    }
}

void insertatend(int x){
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

void deleteatstart(){
    if(front==-1){
        cout<<"queue is empty !!";
    }
    else{
        front++;
        }
}
void deleteatend(){
    if(back==-1){
        cout<<"queue is empty !!";
    }
    else{
        back--;
    }
}

void display(){
    for(int i=front;i<=back;i++){
        cout<<arr[i];
    }
}

};


int main(){

    cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 7 Q1"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

queue q;

q.insertatstart(5);
q.insertatstart(3);
q.insertatend(8);
q.insertatend(9);

while(1){
    int x;
cout<<"\nEnter 1 for insertatstrat, 2 for inseratatend, 3 for deleteatend, 4 for deleteatstaert, 5 for diplay and 6 for exiting: ";
cin>>x;

switch(x){

case 1:
int x;
cout<<"enter number to insert: ";
cin>>x;
q.insertatstart(x);
break;

case 2:
int y;
cout<<"enter number to insert: ";
cin>>y;
q.insertatend(y);

break;

case 3:
q.deleteatend();
break;

case 4:
q.deleteatstart();
break;

case 5:
cout<<"queue is: ";
q.display();
break;

case 6:
goto end;
break;

default:
cout<<"wrong number entered";
break;
}
}

end:
cout<<"program ended";

    return 0;
}