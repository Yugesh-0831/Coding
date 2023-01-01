#include <iostream>
#include <stack>
using namespace std;
 

bool compare(stack<string> stack1, stack<string> stack2)
{
    
    bool equal = true;
 
    if (stack1.size() != stack2.size()) {
        equal = false;
        return equal;
    }
 
    while (!stack1.empty()) {
       
        if (stack1.top() == stack2.top()) {
            
            stack1.pop();
            stack2.pop();
        }
        else {
          
            equal = false;
            break;
        }
    }

    return equal;
}
 
int main()
{

    cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 6 Q1"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;
   
    stack<string> stack1;
    stack<string> stack2;

    int n1,n2,i;
    string w;


    cout<<"Enter the size of stack 1: ";
    cin>>n1;

    cout<<"Enter the size of stack 2: ";
    cin>>n2;


cout<<"Enter the elements of stack1: ";
    for(i=0;i<n1;i++){
           
           cin>>w;
        stack1.push(w);
    }

cout<<"Enter the elements of stack2: ";
    for(i=0;i<n2;i++){
           
           cin>>w;
        stack2.push(w);
    }
 
    if (compare(stack1, stack2))
        cout << "Stacks are equal";
    else
        cout << "Stacks are not equal";
 
    return 0;
}