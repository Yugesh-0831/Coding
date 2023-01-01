#include<iostream>
#include<set>
using namespace std;

int main(){

string s;

cin>>s;

int i=0;
int j=s.length()-1;

string m ="";

for(int k=0;k<=j;k++){
    m+= s[k];
}

while(i<j){
    char k = s[i];
    s[i] = s[j];
    s[j] = k;
    i++;
    j--;
}

cout<<m<<endl;
cout<<s;

   return 0;

}