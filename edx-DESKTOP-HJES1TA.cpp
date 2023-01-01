#include <iostream>
using namespace std;

void sum(int a[3][3], int b[3][3], int sum[3][3]){

int i,j;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
sum[i][j] = a[i][j] + b[i][j];

    }
}
}

void mul(int a[3][3], int b[3][3], int mul[3][3]){

int i,j,k;

 for(int i=0; i < 3; i++)
 {
  for(int j=0; j < 3; j++)
  {
   mul[i][j] = 0; 
   for (int k = 0; k < 3; k++)

   mul[i][j] += a[i][k] * b[k][j];
  }
 } 
}

void transpose(int a[3][3], int tran[3][3]){

     for (int i = 0; i < 3; i++)

  for (int j = 0; j < 3; j++)

   tran[i][j] = a[j][i];
}

void print(int c[3][3])
{

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<c[i][j]<<"      ";
    }
    cout<<endl;
}
}

int main(){

    cout<<"DSA Lab"<<endl;
  cout<<"ASSIGNMENT1 Q1"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

   int a[3][3] = {{2,7,4} , {3,9,2} ,{1,8,4}} ;
   int b[3][3]= {{7,5,3} , {2,8,4} ,{2,4,7}} ;
   int c[3][3],i,j;


int x;

while(1){

cout<<"************\n\n";
cout<<"\nenter 1 for addition "<<endl;
cout<<"enter 2 for multiplication "<<endl;
cout<<"enter 3 for transpose  "<<endl;
cout<<"enter 4 to exit the loop  ";
cout<<"\n\n************\n ";

cin>>x;

switch(x){

    case 1:

    cout<<"\naddition of following matrices is: "<<endl;

sum(a,b,c);
print(c);

break;

case 2:

cout<<"\nmultiplication of following matrix is: "<<endl;

mul(a,b,c);
print(c);

break;

case 3:

cout<<"\ntranspose of first matrix is: "<<endl;

transpose(a,c);
print(c);

cout<<"\ntranspose of second matrix is: "<<endl;

transpose(b,c);
print(c);
break;

case 4:
goto end;
break;

default:
cout<< "\nwrong number entered "<<endl;
break;
}
}

end:

cout<<"\nprogram ended";

  return 0;
}
  