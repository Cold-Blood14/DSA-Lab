//2252421017_A_Spondon
#include <iostream>
#include <vector>
#include <algorithm>
#define edge pair<int, int>
using namespace std;

class Graph
{
public:
    vector<pair<int, edge> > G;
    vector<pair<int, edge> > Mst;
    vector <int> parent;
    int V;
    Graph(int V):parent(V)
    {
        for (int i = 0; i < V; i++)
            parent[i] = i;
        G.clear();
        Mst.clear();
    }
    void AddEdge(int u, int v, int w)
    {
        G.push_back(make_pair(w, edge(u, v)));
    }
    int find_set(int i)
    {
        if (i == parent[i])
            return i;
        else
            return find_set(parent[i]);
    }

    void union_set(int u, int v)
    {
        parent[u] = parent[v];
    }
    void kruskal()
    {
        int i, uparent, vparent;
        sort(G.begin(), G.end());  // increasing weight
        for (i = 0; i < G.size(); i++)
        {
            uparent = find_set(G[i].second.first);
            vparent = find_set(G[i].second.second);
            if (uparent != vparent)
            {
                Mst.push_back(G[i]);  // add to tree
                union_set(uparent, vparent);
            }
        }
    }
    void print()
    {
        cout << "Edge :\tWeight" << endl;
        for (int i = 0; i < Mst.size(); i++)
        {
            cout << Mst[i].second.first << " " << Mst[i].second.second << "  :\t" << Mst[i].first;
            cout << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.AddEdge(0,1,10);
    g.AddEdge(0,2,6);
    g.AddEdge(0,3,5);
    g.AddEdge(1,3,15);
    g.AddEdge(2,3,4);

    g.kruskal();
    g.print();
    return 0;
}
