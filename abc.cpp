 #include<iostream>
 #include<vector>

 using namespace std;


 int main(){

    int n;
    cin>>n;

    int space = 2;

    for(int i = 0;i<3;i++){
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int k=0;k<n-2*space;k++){
            cout<<"*";
        }
        // for(int j =0;j<space;j++){
        //     cout<<" ";
        // }
        // cout<<space;
        space -=1;
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<n;j++){
                  cout<<"*";
        }
        cout<<endl;
    }



     return 0;
 }