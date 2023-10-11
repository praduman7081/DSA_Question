// Dijkstra Algorithm
/* 
   sptSet = {}
   distance = [max,max,..... no of vertices times]
   distance[start] = 0

   while(sptSet != graph.size())
   -- pick min distance verex u which is not in sptSet
   -- add u to sptSet
   -- for each adjacent vertices(av)  of v
   if(dis[u] + edge(u,v) < dis[v])
     - dis[v] = dis[u] + edge(u,v)
*/
/*
 Pros -> Fast and Simple Algorithm
 Cons -> Need to store large parts of the graph in_memory
         Fails for negative edge weights
*/

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<pair<int,int>>> &graph, int u, int v, int w ){
    graph[u].push_back(make_pair(v,w));
    graph[v].push_back(make_pair(u,w));
}

vector<int> dijkstra(vector<vector<pair<int,int>>> graph, int start){
    vector<int> dist(graph.size(), INT_MAX);

    //<vertex, weight> pair. First element of the priority queue will be the minimum
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

     // Add start to pq, where distance is 0
     pq.push(make_pair(start,0));
     dist[start]= 0;

     while(!pq.empty()){
         int u = pq.top().first;
         pq.pop();

         for(auto i =0; i<graph[u].size(); i++){
             int v =graph[u][i].first;
             int weight = graph[u][i].second;

             //If the distance to v is shorter by going through u
             if(dist[v] > dist[u] + weight){
                 dist[v] = dist[u]+ weight;
                 pq.push(make_pair(v,dist[v]));
             }
         }
     }

     return dist;

}

void printdistance(vector<int> &dist, int n){
     cout<<"Vertex      distance from Source\n";
    for(int i=0; i<n; i++){
        cout<<i<<"\t\t"<<dist[i]<<endl;
    }
}

int main()
{
    vector<vector<pair<int,int>>> graph(9, vector<pair<int,int>>(9));
    // graph, start, end, weight
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 7, 8);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 1, 7, 11);
    addEdge(graph, 2, 8, 2);
    addEdge(graph, 2, 5, 4);
    addEdge(graph, 3, 4, 9);
    addEdge(graph, 3, 5, 14);
    addEdge(graph, 4, 5, 10);
    addEdge(graph, 5, 6, 2);
    addEdge(graph, 6, 7, 1);
    addEdge(graph, 6, 8, 6);
    addEdge(graph, 7, 8, 7);

    vector<int> dist = dijkstra(graph, 0);

    // print shortest distance stored in dist[]
   
    printdistance(dist, 9);

    return 0;
}