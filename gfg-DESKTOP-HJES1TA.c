#include <stdio.h>
 
int main(){

int n;
scanf("%d",&n);

int arr[n],count,y=0;

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
    count=0;
    int x= arr[i];
for(int j=0;j<n;j++){
    if(x== arr[j]){
        count ++;
    }
}
if(y<count){
    y= count;
}
}
if(y>0){
    printf("%d",y);
}
else{
    printf("-1");
}

    return 0;
}