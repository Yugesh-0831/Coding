#include <iostream>
#include<list>
#include<map>
using namespace std;

class Graph 
{
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
  
    void addEdge(int v, int w)
    {
    adj[v].push_back(w); 
} 

    void dfs(int s)
    {
  
    visited[s] = true;
    cout << s << " ";
  

    list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i)
        if (!visited[*i])
            dfs(*i);
}
};

  
int main()
{

    cout<<"DSA Lab"<<endl;
  cout<<"Workheet 2.3"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;
    
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
  
    cout << "Depth First Traversal" " (starting from vertex 2) \n";
    g.dfs(2);
  
    return 0;
}