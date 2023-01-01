    #include <iostream>
    using namespace std;

int main(){

    int n,k;

    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int ans =0 ;


    while( n >= 1){
    if((a[n-1] - a[0]) > k){
        n--;
        ans++;
    }
    else{
        // ans++;
        break;
    }
    }

cout<<ans;
    return 0;
}

