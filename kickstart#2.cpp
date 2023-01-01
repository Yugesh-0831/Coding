#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int array[],int low,int high, int x){
    
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        vector<int> an(n,-1);
        // map<int,int> mpp;
        // if(n == 1) 
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);

        for(int i=0;i<n;i++){
            int ans =0;
            int j = binarySearch(b,0,n-1,a[i]);
            // cout<<j;
            int l = j;
            j++;       
            // if(j-1 == n-1) {
            //   if(n ==1) continue;
            //   an[i] = b[n-2];
            // }
            // else{
                while(j<n && b[j]<=(2*a[i])){
                    ans = b[j];
                    j++;
                }
                if(ans == 0){
                  if(l==0) continue;
                  else{
                  an[i] = b[l-1];
                  }
                }
                else{
                an[i] = ans;
                }
            // }
        }
        for(int i=0;i<n;i++){
            cout<<an[i]<<" ";
        }
        cout<<endl;
    }
}