#include<iostream>
using namespace std;
int main(){
    int i,n,position=-1;
int a[]={1,4,7,9,6,2,8,21,44};
n= sizeof(a)/sizeof(a[0]);

cout<<n;

cout<<"the elemnts of array are-";

for(i=0;i<n;i++){
  cout<<a[i]<<",";
}

int add;
cout<<"\nenter the position you want to add the element"<<endl;
cin>>add;

int element;
cout<<"enter the element to be added"<<endl;
cin>>element;

--add;

for(i=n;i>=add;i--){
a[i+1]=a[i];
}

a[add]=element;

cout<<n;

cout<<"\nelements are";
for(i=0;i<n+1;i++){
cout<<a[i]<<",";
}


return 0;
