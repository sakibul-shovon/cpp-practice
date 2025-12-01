#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;
    int n; 
    cin >> n;
    vector<string> v(n);
    pair<int, int> queen, king;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        for(int j = 0; j < n; j++) {
            if(v[i][j] == 'Q') queen = {i, j};
            if(v[i][j] == 'K') king = {i, j};
        }
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    q.push(queen);
    dist[queen.first][queen.second] = 0;

    int dx[4] = {0, 0, -1, 1};  // right, left, up-right, down-left
    int dy[4] = {1, -1, 1, -1};

    while(!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if(r == king.first && c == king.second) {
            cout << dist[r][c] << '\n';
            return 0;
        }

        for(int d = 0; d < 4; d++) {
            int nr = r + dx[d];
            int nc = c + dy[d];

            while(nr >= 0 && nr < n && nc >= 0 && nc < n && v[nr][nc] != '#') {
                if(dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
                nr += dx[d];
                nc += dy[d];
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}