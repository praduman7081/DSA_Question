#include<bits/stdc++.h>
using namespace std;

#define V 5

void addEdge(int graph[][V], int u, int v){
    graph[u][v] =1;
}

void printgraph(int graph[][V], int n){
   for(int i=0; i<n; i++){
        cout<<i<<"--";
       for(int j=0; j<n; j++){
           cout<<graph[i][j]<<" ";
       }
       cout<<"\n";
   }
}
int main()
{
    int graph[V][V] ={0};
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);
    addEdge(graph, 2, 4);
    cout<<"Adjecency Matrix\n";
    printgraph(graph, V);

    return 0;
}