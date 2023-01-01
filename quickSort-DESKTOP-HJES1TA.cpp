#include <iostream>
using namespace std;

void swap(float *x,float *y){
float temp;

temp = *x;
*x=*y;
*y=temp;
}

int partition(float arr[],int l, int h){

int j,i= l;
float pivot= arr[l];

for(j=l+1;j<=h;j++){

   if(arr[j]>pivot){

       i++;
       swap(&arr[i], &arr[j]);
   }
   else{
       continue;
   }
}
swap(&arr[i],&arr[l]);
return (i);
}

void quicksort ( float arr[],int low, int high){

if(low< high){

int pi= partition(arr,low,high);

quicksort(arr,low, pi-1);
quicksort(arr,pi+1, high);
}
}

int main(){

int i,n,high,low;
float a[n];

 cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 4 Q2"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

   cout<<"enter the size of the array: ";
    cin>>n;

    cout<<"enter the elements of array: ";
    
    for(i=0;i<n;i++){
    cin>>a[i];
    }

    cout<<"unsorted array is: ";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}


quicksort(a,0,n-1);


cout<<"\narray after quicksort in descending order is: ";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;

}