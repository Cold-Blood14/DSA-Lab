#include <bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
int n,m;
cin>>n>>m;//n=node number, m= edge number
vector<vector<int>>edges; //graph implementation
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    edges.push_back({u,v,w});
}
int src;
cin>>src;
vector<int> dist(n,INF);//n= Node no, INF = initialized value
dist[src]=0;
for(int i=0;i<n-1;i++){
    for(auto e:edges){
        int u =e[0];
        int v= e[1];
        int w= e[2];
        dist[v]=min(dist[v],w+dist[u]);
    }
}
for(auto i:dist)
    cout<<i<<" ";
}
