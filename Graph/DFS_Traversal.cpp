#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> graph[], int u, int v){
    graph[u].emplace_back(v);
    graph[v].emplace_back(u);
}


void DFS_iterative(vector<int> graph[], int start){
    vector<bool> visited(graph->size(), false);
    stack<int>st;
    st.push(start);
    visited[start] = true;
    while(!st.empty()){
        int v = st.top();
        cout<< v<< " ";
        st.pop();
        //push all adjacent nodes of v and mark as visited
        for(auto i = graph[v].begin(); i != graph[v].end(); i++){
           if(!visited[*i]){
               st.push(*i);
               visited[*i] =true;


           }
        }

    }

}

void DFS_recursive(vector<int> graph[], vector<bool> &visited, int node ){
    visited[node] = true;
    cout<< node <<" ";
    for(auto i = graph[node].begin(); i != graph[node].end(); i++){
        if(!visited[*i]){
            DFS_recursive(graph, visited, *i);
        }
    }
}
int main()
{
    int V=7;    // Vertices
    vector<int> graph[V];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1 ,2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    cout<<"DFS traversal iterative starting from 0 node\n";
    DFS_iterative(graph, 0);
    cout<<"\n";

    cout<<"DFS traversal recursive starting from 0 node\n";
    vector<bool> visited(graph-> size(), false);
    DFS_recursive(graph, visited, 0);
    return 0;
}