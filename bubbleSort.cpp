# include <iostream>
using namespace std;


void sort(int *x,int *y){
int temp;

if(*x>*y){
temp = *x;
*x=*y;
*y=temp;
}
}


int main(){
    int n,i,j,pass,a[100];

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
    sort(&a[i],&a[i+1]);  
}
pass--;
}



cout<<"\nsorted array is: ";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}

    return 0;
}

