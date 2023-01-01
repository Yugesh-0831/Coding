#include <iostream>
using namespace std;


void swap(int*x,int*y){

    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){

int i,j,n,arr[n];

cout<<"enter the size of array: ";
cin>>n;

for(i=0;i<n;i++){
cin>>arr[i];
}

cout<<"the unsorted array is: ";
for(i=0;i<n;i++){

    cout<<arr[i]<<" ";
}
    

for(i=0;i<n;i++){

    if(arr[i+1]<arr[i]){
    for(j=i;j>=0;j--){
        if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
        }
    }
    }
}

cout<<"\nthe sorted array is: ";
for(i=0;i<n;i++){

    cout<<arr[i]<<" ";
}
    return 0;
}