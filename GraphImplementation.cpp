#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph {
public:
    unordered_map<int, list<int>> adj; 

    void addEdge(int u, int v, bool direction) {
        // direction = 1 for directed graph, 0 for undirected graph
        adj[u].push_back(v);
        if (direction==0) { // If it's a undirected graph
            adj[v].push_back(u);
        }
    }

    void printAdjList() {
        for (auto i : adj) {
            cout << i.first << "-> ";
            for (auto j : i.second) {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the Number of Nodes" << endl;
    cin >> n;
    int m;
    cout << "Enter the Number of edges" << endl;
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Creating an undirected graph
        g.addEdge(u, v, 0); // Passing 0 for undirected graph
    }
    g.printAdjList();

    return 0;
}
