# include <iostream>
using namespace std;


void swap(int *x,int *y){
int temp;

temp = *x;
*x=*y;
*y=temp;
}


int main(){
    int n,i,pass,a[100],j=0,ns=0;

    cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 4 Q1"<<endl;
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

pass=n-1;

while(pass>= 1){
for(i=0;i<pass;i++){
    if(a[i]>a[i+1]){
    swap(&a[i],&a[i+1]); 
    j++;
    } 
}
ns +=j;
pass--;
}



cout<<"\nsorted array is: ";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}

cout<<"\n no. of of swaps performed: "<<ns;

    return 0;
}

