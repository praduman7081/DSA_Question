#include<bits/stdc++.h>
using namespace std;

#define V 5

void addEdge(vector<int> graph[], int u, int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printgraph(vector<int> graph[], int n){
    for(int i=0; i<n; i++){
        cout<<i;
        for(auto j: graph[i]){
            cout<<" -> "<<j;

        }
        cout<<"\n";
    }
}

int main()
{
    vector<int> graph[V];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    // addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);
    addEdge(graph, 2, 4);
    cout<<"Adjecency list"<<endl;
    printgraph(graph, V);
    return 0;
}