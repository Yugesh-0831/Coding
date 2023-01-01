#include<iostream>
using namespace std;
int main(){
    int i,n=9,position=-1;
int a[100]={1,4,7,9,6,2,8,21,44};
//n= sizeof(a)/sizeof(a[0]);
int x;

cout<<"press 1 for printing the array, 2 for searching, 3 for deletion and 4 for insertion"<<endl;
cin>>x;

switch(x){

case 1:
cout<<"the elemnts of array are: ";

for(i=0;i<n;i++){
  cout<<a[i]<<" ";
}
break;

case 2:
int num;
cout<<"\n\nenter the number to search"<<endl;
cin>>num;
for(i=0;i<n;i++){
    if (a[i]==num)
    
     position=i+1;
}
if (position>=0)
cout<<position;
 else{
    cout<<"the nummber is not present in the array";
    }
break;

    case 3:
int del;
cout<<"\nenter the position you want to delete the element from"<<endl;
cin>>del;
for(i=del-1;i<n;i++)
{
  a[i]=a[i+1];
}
cout<<"the array after deletion-";

for(i=0;i<n-1;i++){
  cout<<a[i];
}
break;
case 4:

int add;
cout<<"\nenter the position you want to add the element"<<endl;
cin>>add;

int element;
cout<<"enter the element to be added"<<endl;
cin>>element;

n++;

for(i=n-1;i>=add;i--){
a[i+1]=a[i];
}

a[add-1]=element;

cout<<"\nelements are";
for(i=0;i<9;i++){
  cout<<a[i]<<",";
}
break;

default:
cout<<"wrong number entered";
}


return 0;
}