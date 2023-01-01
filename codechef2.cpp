#include <iostream>
using namespace std;
#include <limits.h>
 
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[],int n)
{
   
    // Initialize min value
    int min = 9999999, min_index;
 
    for (int k = 0; k < n; k++)
        if (sptSet[k] == false && dist[k] <= min)
            min = dist[k], min_index = k;
 
    return min_index;
}
 
// A utility function to print the constructed distance array
void printSolution(int dist[],int v)
{
    cout <<"Vertex \t Distance from Source" << endl;
    for (int i = 0; i < v; i++)
        cout  << i << " \t\t"<<dist[i]<< endl;
}
 
// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int n, int graph[][10], int src)
{
    int dist[n]; // The output array.  dist[i] will hold the shortest
    // distance from src to i
 
    bool sptSet[n]; // sptSet[i] will be true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized
 
    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < n; i++)
        dist[i] = 9999999, sptSet[i] = false;
 
    // Distance of source vertex from itself is always 0
    dist[src] = 0;
 
    // Find shortest path for all vertices
    for (int count = 0; count < n - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in the first iteration.
        int u = minDistance(dist, sptSet, n);
 
        // Mark the picked vertex as processed
        sptSet[u] = true;
 
        // Update dist value of the adjacent vertices of the picked vertex.
        for (int k = 0; k < n; k++)
 
            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[k] && graph[u][k] && dist[u] != 9999999
                && dist[u] + graph[u][k] < dist[k])
                dist[k] = dist[u] + graph[u][k];
    }
 
    // print the constructed distance array
    printSolution(dist, n);
}
 
// driver program to test above function
int main()
{

    int n,m;

    cin>>n>>m;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int u,v,w;

    int graph[n][n];

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            graph[i][j]=0;
        }
    }

    for(int i=1;i<=m;i++){

        cin>>u>>v>>w;
        graph[u-1][v-1]=w;
        graph[v-1][u-1]=w;
    }


 
    dijkstra(n, graph, 0);
 
    return 0;
}
 
// This code is contributed by shivanisinghss2110