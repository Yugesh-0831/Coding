#include <iostream>
using namespace std;


 int gcd(int a, int b){
        

         if(b==0){
             return a;
         }
         else{
            return gcd(b,a%b);
         }
    }

int main(){
    
 int x=  gcd(15,5);
 cout<<"xx: "<<x;

    return 0;
}