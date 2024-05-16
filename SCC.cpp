#include <bits/stdc++.h>
#define MAX_N 20001
#define ll long long int
using namespace std;
int node,edge,cc=0;
struct Node
{
    vector <int> adj;
    vector <int> rev_adj;
};
Node g[MAX_N];
stack <int> S;
bool visited[MAX_N];
void dfs_1(int x)
{
    visited[x]=true;
    for(int i=0; i<g[x].adj.size(); i++)
        if(!visited[g[x].adj[i]]) dfs_1(g[x].adj[i]);
    S.push(x);
}
void dfs_2(int x)
{
    cout<<x<<" ";
    visited[x]=true;
    for(int i=0; i<g[x].rev_adj.size(); i++)
        if(!visited[g[x].rev_adj[i]]) dfs_2(g[x].rev_adj[i]);
}
void Kosaraju()
{
    for(int i=1; i<=node; i++)
        visited[i]=false;
    for(int i=1; i<=node; i++)
        if(!visited[i]) dfs_1(i);
    for(int i=1; i<=node; i++)
        visited[i]=false;
    while(!S.empty())
    {
        int v=S.top();
        S.pop();
        if(!visited[v])
        {
            cout<<"Component "<<cc<<": ";
            dfs_2(v);
            cc++;
            cout<<endl;
        }
    }
}
int main()
{
    cin>>node>>edge;
    int a,b;
    while(edge--)
    {
        cin>>a>>b;
        g[a].adj.push_back(b);
        g[b].rev_adj.push_back(a);
    }
    Kosaraju();
    cout<<"SCC: "<<cc;
    return 0;
}
