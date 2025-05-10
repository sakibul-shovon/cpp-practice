#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    int src, dest;
    cin >> src >> dest;

    vector<int> distance(n + 1, -1);
    vector<int> prev(n + 1, -1);
    queue<int> q;

    q.push(src);
    distance[src] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (distance[v] == -1) {
                distance[v] = distance[u] + 1;
                prev[v] = u;
                q.push(v);
            }
        }
    }

    vector<int> path;
    int x = dest;

    while (1) {
        path.push_back(x);
        if (x == src) {
            break;
        }
        x = prev[x];
    }

    reverse(path.begin(), path.end());

    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
