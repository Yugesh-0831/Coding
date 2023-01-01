#include <iostream>
using namespace std;

int main(){

int t,n,i,x=0,y=0,j=1,k=1;
int arr[n];

cout<<"enter the number of test cases";
cin>>t;

while(t>0){

cout<<"enter the size of array";
cin>>n;

cout<<"enter the elements of array";

for(i=0;i<n;i++){
    cin>>arr[i];
}

for(i=0;i<n;i++){
    if(arr[i]>=8){
        k=0;
        break;
    }
}

if(k==0){
    cout<<"no";
}

else{

while(j<8){

for(i=x;i<n;i++){
    if (arr[i]==j){
x++;
    }
    else{
        break;
    }
}

for(i=n-y;i>=0;i--){
    if(arr[i]==j){
    y++;
    }
    else{
        break;
    }
}

if(x==y){
 k=1;
}

else{
    k=0;
    break; 
}
j++;
}

if(k==1){
    cout<<"yes";
}
else{
    cout<<"no";
}
}
t--;
}
    return 0;
}