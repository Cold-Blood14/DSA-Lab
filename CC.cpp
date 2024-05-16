#include <iostream>
#include <vector>
using namespace std;
vector <int> adj[10];
bool visited[10];
void dfs(int s)
{
    visited[s]=true;
    cout<<s<<" ";
    for(int i=0; i<adj[s].size(); ++i)
    {
        if(visited[adj[s][i]]==false)
                dfs(adj[s][i]);
    }
}
void initialize()
{
    for(int i=0; i<10; i++)
        visited[i]=false;
}
int main()
{
    int node,edge,x,y,cc=0;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialize();

    for(int i=1; i<=node; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            cc++;
            cout<<endl;
        }

    }
cout<<"Connected Components:"<<cc;
    return 0;
}
