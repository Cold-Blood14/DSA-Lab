#include <bits/stdc++.h>
using namespace std;
#define V 9
void print(int dis[])
{
    cout<<"Vertex \t Distance from Source"<<endl;
    for(int i=0; i<V; i++)
        cout<<i<<" \t\t"<<dis[i]<<endl;
}
int min_Dis(int dis[],bool visited[])
{
    int Min=INT_MAX,min_inx;
    for(int v=0; v<V; v++)
    {
        if(visited[v]==false && dis[v]<=Min)
            Min=dis[v],min_inx=v;
    }
    return min_inx;
}
void djikstra(int graph[V][V],int src)
{
    int dis[V];
    bool visited[V];
    for (int i=0; i<V; i++)
        dis[i]=INT_MAX,visited[i]=false;
    dis[src]=0;
    for(int cnt=0; cnt<V-1; cnt++)
    {
        int u=min_Dis(dis,visited);
        visited[u]=true;
        for(int v=0; v<V; v++)
        {
            if(!visited[v]&& graph[u][v]&&dis[u]!=INT_MAX&&dis[u]+graph[u][v]<dis[v])
                dis[v]=dis[u]+graph[u][v];
        }
    }
    print(dis);
}
int main()
{
    int graph[V][V]= {{0,4,0,0,0,0,0,8,0},
        {4,0,8,9,0,0,0,11,0},
        {0,8,0,7,0,4,0,0,2},
        {0,0,7,0,9,14,0,0,0},
        {0,0,0,9,0,10,0,0,0},
        {0,0,4,14,10,0,2,0,0},
        {0,0,0,0,0,2,0,1,6},
        {8,11,0,0,0,9,1,0,7},
        {0,0,2,0,0,0,6,7,0}
    };
    djikstra(graph,0);
    return 0;
}
