#include <iostream>
using namespace std;

void insertion(int array[],int n,int x){
  int high,low,i;

low=0;
high=n-1;

int mid;

 while (low <= high) {
    int mid = (low + high) / 2;

 if (array[mid] < x){
      low = mid + 1;
    }
    else if (array[mid] > x){
      high = mid - 1;
    }
}
 mid = (low + high) / 2;

    n++;

for(i=n-1;i>=mid;i--){
array[i+1]=array[i];
}

array[mid+1]=x;

cout<<"array after insertion is: "<<endl;
for(i=0;i<n;i++){
    cout<<array[i]<<" ";
}
}

void deletion(int array[],int n,int x){
  int high,low,i;

low=0;
high=n-1;

int mid;

 while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == x){
         for(i=mid;i<n;i++)
{
  array[i]=array[i+1];
}
cout<<"\nthe array after deletion is :";
for(i=0;i<n-1;i++){
    cout<<array[i]<<" ";
}
    }
   else if (array[mid] < x){
      low = mid + 1;
    }
    else{
      high = mid - 1;
  }
}
}


int main(){

  cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 2 Q2"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

int n,i,element1,element2;
int arr[100];

cout<<"enter the size of array:  ";
cin>>n;

cout<<endl;

cout<<"enter the elements of the array (in ascending order)"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
cout<<endl;

cout<<"the array is :";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


while(1){
char cond;
 cout<<"\nenter 1 to insert, 2 to delete and q to exit the program "<<endl;
  cin>>cond;

switch (cond){

 case 'q':
 cout<<"Program ended";
 goto end;
break;
 
case '1':
    cout<<endl;
    cout<<"enter the element to insert: ";
    cin>>element1;

   insertion(arr,n,element1);
    
 
break;

case '2':

cout<<endl;
cout<<"enter the element to delete: ";
    cin>>element2;

   deletion(arr,n,element2);

break;

default:

cout<<endl;
cout<<"Wrong number entered";
}
}
end:

return 0;
}