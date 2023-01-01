#include <iostream>
#include <vector>
using namespace std;

int main(){

int x,p,k;

cin>>x;
cin>>p;
cin>>k;

vector <int> a;

for(int i=0;i<k;i++){

a.push_back((i*x)%p);
}



    return 0;
}