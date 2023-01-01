#include <iostream>
using namespace std;

int power(int a, unsigned int b){
    if (b == 0) return 1;
    else if (b%2 == 0){
        return power(a,b/2)*power(a,b/2);
    }
    else{
        return a*power(a,b/2)*power(a,b/2);
    }
}

int main(){

    int a,b;

    cout<<"Yugesh Jhamb"<<endl;
    cout<<"20BCS5510"<<endl<<endl;

    cout<<"Enter the number: ";
    cin>>a;

    cout<<"Enter the power: ";
    cin>>b;

    cout<<power(a,b);

    return 0;
}