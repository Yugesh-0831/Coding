#include <iostream>
using namespace std;

int main(){

int plotreg_num;
int k,j;

cin>>plotreg_num;
cin>>k;

string prn= to_string(plotreg_num);
string ans=prn;
for(int i=0;i<prn.length();i++){

j=i;
    if((i%2)==0){
     
     for(int l=0;l<k;l++){

         j++;
         if(j>prn.length()){
             j=0;
         }
     }
        ans[i]=prn[j];
    }
}

cout<<ans;

    return 0;
}