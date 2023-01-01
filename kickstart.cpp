#include <iostream>
#include <iomanip>

using namespace std;
#define pi 3.141592653589

int main(){

int t,i=1;
cin>>t;

while(t--){
long long r;
int a,b;
cin>>r>>a>>b;

double area=0;
int j=r;
area += pi*j*j;

while(j != 0){

j *=a;
area += pi*j*j;
j /= b;
area += pi*j*j;

}
cout<<setprecision(8);
cout<<"case #"<<i<<" :  "<<area<<endl;
i++;

}

return 0;
}