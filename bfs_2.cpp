#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
static int adj[10][10];
int n, edges, src_vert, dest_vert, i, j, q;

int start, status[10], queue[15], front, rear, w, k =0, bfs[10];
cout<<"Enter Vertices (<=10) and Edges ";
cin>>n;
cin>>edges;
cout<<"iput source and dest. vertices of edges: ";
for(i = 1; i<=edges; i++)
{
    cin>>src_vert>>dest_vert;
    adj[src_vert][dest_vert] = 1;
}
cout<<"Adj. Matrix is: "<<endl;
for(i = 1; i<=n; i++)
{
    for(j=1;j<=n;j++)
    {
        cout<<adj[i][j]<<" ";
    }
    cout<<"\n";
}

cout<<"Enter strt vertex";
cin>>start;
for(i=1;i<=n;i++)
{
    status[i] = 0;
}
front = rear = -1;
    front = rear = 0;
    queue[front] = start;
    status[start] = 1;
    while(front != -1)
    {
        w = queue[front];
        if(front == rear)
        {   
            front = rear = -1;
        }    
        else
        {
            front++;
        }    
            
        status[w] = 2;
        bfs[k] = w;
        k++;
        for(j = 1; j<=n; j++)
        {
            if(adj[w][j] != 0 && status[j] == 0)
            {
                queue[++rear] = j;
                if(rear == 0)
                {
                    front = 0;
                }    
                status[j] = 1;    
            }
        }
    }
    
    cout<<"Traversal BFS ";
    for(q = 0; q< k; q++)
    {
        cout<<"\t"<<bfs[q];
    }
    
return 0;
}
