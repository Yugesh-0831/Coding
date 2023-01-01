#include<stdio.h>
#include <string.h>

int main(){

char batch[100];
char id;

gets(batch);
scanf("%c",&id);

for(int i=0;i<strlen(batch);i++)
{

    if(batch[i]==id){

        for(int j=i;j<strlen(batch);j++)
      
      batch[j]=batch[j+1];
    }
}

// batch.erase(remove(batch.begin(), batch.end(), 'id'), batch.end());

printf("%s",batch);


    return 0;
}