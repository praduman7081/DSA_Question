//  Flyod Algorithm

/* 
   V*V matrix initiallized to INF
   for i=0 to V;
     dist[i][i] =0
     for each (u,v) in E;
     dist[u][v]= weight(u,v);

     then ----

     for k=0 to V:
       for i=0 to V:
           for j=0 to V:
             dist[i][j]= min(dist[i][j], dist[i][k]+ dist[k][j])
   
*/


#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &dist, int u, int v, int w){
    dist[u][v] = w;
}

void floyd_warshall(vector<vector<int>> &dist, const int V){
    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX){
                    dist[i][j]= min(dist[i][j], (dist[i][k] + dist[k][j]));
                }
            }
        }
    }
}

int main()
{
    int V =5;
    vector<vector<int>> dist(V, vector<int> (V, INT_MAX));

    addEdge(dist, 0, 1, 3);
    addEdge(dist, 0, 4, -4);
    addEdge(dist, 0, 2, 8);
    addEdge(dist, 1, 2, 1);
    addEdge(dist, 1, 4, 7);
    addEdge(dist, 2, 1, 4);
    addEdge(dist, 3, 0, 2);
    addEdge(dist, 3, 2, -5);
    addEdge(dist, 4, 3, 6);

    for(int i=0; i<V; i++){
        dist[i][i]=0;
    }

    floyd_warshall(dist, V);
   cout<<"Shortest distance between all pairs\n";
   for(int i=0; i< V; i++){
       for(int j=0; j<V; j++){
           cout<<i <<"  to  "<< j <<" :   "<<dist[i][j]<<endl;
       }
   }




    return 0;
}