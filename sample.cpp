#include <iostream>
using namespace std;

int fact(int x){

int y=1;

    for(int i=1;i<=x;i++){

     y= y*i;
    }
    return y;
}

int main(){

int k;
int n;

cin>>n;

int x= fact(n*2-1);
cout<<x*2;


    return 0;
}