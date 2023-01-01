#include <iostream>
using namespace std;

int binarysearch(int a[],int n,int element){
  int ub,lb;

lb=0;
ub=n-1;

int mid;

while(lb<=ub){
    
 mid=(ub+lb)/2;
 
 if(a[mid]==element){
   return mid;
}

else if(a[mid]<element){
    lb=mid+1;
}
else {
    ub=mid-1;
}
}
return -1;
}

int main(){

     cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 2 Q2"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

int n,i,element;
int arr[10];

n=10;

cout<<"\nenter 10 elements in the array (in ascending order)"<<endl;
for(i=0;i<n;i++){
    cout<<"element"<<i+1<<": ";
    cin>>arr[i];
}

cout<<"\nthe array is :";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    cout<<"\nenter the element to search: ";
    cin>>element;


int ans = binarysearch(arr,n,element);

if(ans==-1){
    cout<<"element not found";
}

else {
    cout<<"the element found at position: "<<ans+1;
}
return 0;
}
