#include <iostream>
#include <stack>
using namespace std;


int main(){

string s;
char c[s.length()];
stack <char> a;
int x=0;


 cout<<"DSA Lab"<<endl;
    cout<<"Assignment 2 Q2"<<endl;
    cout<<"Yugesh Jhamb"<<endl;
    cout<<"20BCS5510\n"<<endl;

cout<<"Input your string: ";
cin>>s;

for(int i=0;i<s.length();i++){

a.push(s[i]);
}

for(int i=0;i<s.length();i++){
c[i]= a.top();
a.pop();
}

for(int i=0;i<s.length();i++){
if(s[i]==c[i]){
    x=1;
    continue;
}
else{

x=0;
}
}

if(x==1){
    cout<<"The following string is a palindrome..";
}
else{
    cout<<"The following string is not a palindrome!!";
}


    return 0;
}