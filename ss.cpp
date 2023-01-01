// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

int n,i,pos;
int arr[n];

cout<<"enter the size of aray ";
cin>>n;

cout<<"\nenter the elements of the array (in ascending order)"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i]; }
    
    int element;
    cout<<"\nenter the element\n";
    cin>>element;

    int ub,lb;

lb=0;
ub=n-1;

int mid;
mid=(ub+lb)/2;

while(lb<=ub){

 if(arr[mid]=element){
   cout<<"element found at position"<<mid+1;
    break;
}

else if(arr[mid]<element){
    lb=mid+1;
}
else {
    ub=mid-1;
    mid=(ub+lb)/2;
}
}

return 0;

}