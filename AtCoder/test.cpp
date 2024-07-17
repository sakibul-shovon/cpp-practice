#include <bits/stdc++.h>
using namespace std;

vector<int> Node_vec[100];
int color[12];

bool BFS(int source){
    queue<int> q;

    q.push(source);
    color[source] = 1; // Start coloring the source with color 1

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i < Node_vec[u].size(); i++){
            int v = Node_vec[u][i];
            if(color[v] == -1){
                // Assign alternate color to this adjacent node
                color[v] = 1 - color[u];
                q.push(v);
            } else if(color[v] == color[u]){
                // If adjacent node has the same color, graph is not bipartite
                return false;
            }
        }
    }
    return true;
}

int main(){
    int node, edge;
    cin >> node >> edge;

    for(int i = 1; i <= edge; i++){
        int a, b;
        cin >> a >> b;
        Node_vec[a].push_back(b);
        Node_vec[b].push_back(a);
    }

    for(int i = 1; i <= node; i++){
        cout << i << "-> ";
        for(int j = 0; j < Node_vec[i].size(); j++){
            cout << Node_vec[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= node; i++){
        color[i] = -1; // Initialize all nodes as uncolored
    }

    bool isBipartite = true;
    for(int i = 1; i <= node; i++){
        if(color[i] == -1){
            // If the node is not colored, perform BFS from that node
            if(!BFS(i)){
                isBipartite = false;
                break;
            }
        }
    }

    if(isBipartite){
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
