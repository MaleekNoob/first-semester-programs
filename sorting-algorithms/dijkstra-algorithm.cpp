#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

const int INF = INT_MAX; // Infinite distance

typedef pair<int, int> iPair;

class Graph {
    int V; // Number of vertices
    vector<pair<int, int>> *adj; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj = new vector<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w)); // Undirected graph
    }

    void dijkstra(int src) {
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
        vector<int> dist(V, INF); // Set all distances to infinity
        pq.push(make_pair(0, src)); // Push source node into priority queue
        dist[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            // Traverse adjacent vertices of u
            for (auto i = adj[u].begin(); i != adj[u].end(); ++i) {
                int v = i->first;
                int w = i->second;

                // Update distance if a shorter path is found
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }

        // Print distances
        cout << "Vertex\tDistance from Source" << endl;
        for (int i = 0; i < V; ++i) {
            cout << i << "\t" << dist[i] << endl;
        }
    }
};

int main() {
    int V = 9; // Number of vertices
    Graph g(V);

    // Add edges
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.dijkstra(0); // Run Dijkstra's algorithm starting from vertex 0

    return 0;
}
