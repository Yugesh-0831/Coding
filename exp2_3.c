#include<stdio.h> 
#include<string.h>
/*long long int x[100005];*/ long long int u[100005]; /*long long int ind[100005];*/ int main()
{
long long int t;
scanf("%lld",&t); while(t--)
{
long long int n,k,q;
scanf("%lld %lld %lld",&n,&k,&q); 
char a[n+1];
scanf("%s",a);
long long int len=strlen(a);
long long int i,j,m;
long long int c1,c2;
c1=c2=0;
i=0;
 
j=0; /*memset(x,0,sizeof(x));*/ memset(u,0,sizeof(u)); /*memset(ind,-1,sizeof(ind)); x[0]=0;*/
u[0]=0;
while(1)
{
if(c1>k||c2>k) {
u[i+1]=u[i]+(len-1-j+2); /*ind[j]=i+1;*/ if(a[i]=='0')
c1--;
else if(a[i]=='1') c2--;
 i++;
                 } 
  else {
      if(j!=len) {
        if(a[j]=='0') c1++;
        else
          c2++;
          j++; }
      else
         break;
     }
} 

} for(m=i+1;m<=len;m++) {
u[m]+=(u[m-1]);
} /*for(i=1;i<=len;i++) {
if(ind[i]==-1&&ind[i-1]!=-1) {
ind[i]=ind[i-1];
} }*/
/*for(i=0;i<=len;i++) printf("%lld\n",u[i]);*/ long long int l,r; while(q--){
scanf("%lld %lld",&l,&r); long long d=(len-r);
long long int count=0; long long int low=l;
long long int high=r;
long long int mid=0;
long long index=-1; if((u[low]-u[low-1])<=d){} else if((u[high]-u[high-1])>d) {
count=u[high]-u[l-1]; index=high-l+1; count=count-(index*d);
} else{
 
while(low<=high) {
mid=(low+high)/2; if((u[mid]-u[mid-1])>d&&(u[mid+1]-u[mid])<=d) {
index=mid;
break; }
else if((u[mid]-u[mid-1])<=d&&(u[mid-1]-u[mid-2])>d) {
index=mid-1;
break; }
else if((u[mid]-u[mid-1])>d&&(u[mid+1]-u[mid])>d) {
low=mid+1; }
else if((u[mid]-u[mid-1])<=d&&(u[mid-1]-u[mid-2])<=d) {
high=mid-1; }
} //printf("%lld\n\n",index); if(index!=-1&&index!=0)
{
count=(u[index]-u[l-1]); index=(index-l+1); //printf("%lld ",index); //printf("%lld ",count); count=count-(index*d);
 
} }
//printf("%lld\n",count); long long int s=(r-l+1); s=(s*(s+1))/2; s=s-count; printf("%lld\n",s);
//printf("%lld\n",count);
 }
} return 0;
}
