#include<iostream>
using namespace std;


int main(){

int v,e;

cout<<"enter the number of vertices: ";
cin>>v;

cout<<"enter the number of edges: ";
cin>>e;

 int adj[v+1][v+1],str_vertex,end_vertex;

for(int i=1;i<=e;i++){

    cin>>str_vertex>>end_vertex;

    adj[str_vertex][end_vertex]=1;

}

int start;

cout<<"enter the starting vertex: ";
cin>>start;

int status[v+1],bfs[v];
int queue[v];

for(int i=1;i<=v;i++){

    status[i]=0;
}

int front,rear;
front=rear=0;

while(front!=-1){

queue[front]=start;
status[start]=1;

if(front=rear){
    front=-1;
}
else{
    front++;
}

for(int i=0;i<v;i++){

    if(adj[start][i]==1 && status[i]==0){

        queue[++rear]=i;
        status[i]=1;
    }
}

}

    return 0;
}