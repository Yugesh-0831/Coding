#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){

int n1=(mid-low)+1;
int n2=high-mid;

int a[n1],b[n2],j,i,k=low;

for(i=0;i<n1;i++){
    a[i]=arr[low+i];
}

for(j=0;j<n2;j++){
    b[j]=arr[mid+1+j];
}

j=0;
i=0;

while(i<n1 && j<n2){

  if(a[i]<b[j]){
      arr[k]=b[j];
      j++;
      k++;
  }
  else{
      arr[k]=a[i];
      i++;
      k++;
  }
}

while(i<n1){
    arr[k]=a[i];
    k++;
    i++;
}
while(j<n2){
    arr[k]=b[j];
    j++;
    k++;
}
}

void mergesort(int a[],int low,int high){

if(low<high){

    int mid=(low+high)/2;

    mergesort(a,low,mid);
    mergesort(a,mid+1,high);

    merge(a,low,mid,high);
}

}

int main(){

     cout<<"DSA Lab"<<endl;
  cout<<"Final Worksheet"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

int i,n,arr[n];

cout<<"Enter the size of array: ";
cin>>n;

cout<<"Enter the elements of array: ";

for(i=0;i<n;i++){

cin>>arr[i];
}

cout<<"Unsorted array is: ";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

mergesort(arr,0,n-1);


cout<<"\n\nArray in descending order after merge sort is: ";

for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}