#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int vertices;
    vector<vector<int>> adjList;

public:
    Graph(int V) {
        vertices = V;
        adjList.resize(V);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Uncomment for undirected graph
    }

    void printAdjList() {
        for (int i = 0; i < vertices; ++i) {
            cout << "Vertex " << i << ": ";
            for (int j = 0; j < adjList[i].size(); ++j) {
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.printAdjList();

    return 0;
}
