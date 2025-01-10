#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define pb push_back
#define yes "YES"
#define no "NO"

char arr[1001][1001];
char br[1001][1001];
bool vis[1001][1001];
ll n, m;
vector<char> path;

bool isValid(ll x, ll y) {
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    if(arr[x][y] == '#' || vis[x][y]) return false;
    return true;
}

bool bfs(ll x, ll y) {
    queue<pair<ll, ll>> q;
    q.push({x, y});
    vis[x][y] = true;

    while(!q.empty()) {
        ll a = q.front().first;
        ll b = q.front().second;
        q.pop();

        if(arr[a][b] == 'B') {
            while(true) {
                path.pb(br[a][b]);

                if(path.back() == 'L') b++;
                if(path.back() == 'R') b--;
                if(path.back() == 'U') a++;
                if(path.back() == 'D') a--;

                if(a == x && b == y) break;
            }
            return true;
        }

        if(isValid(a, b-1)) br[a][b-1] = 'L', q.push({a,b-1}), vis[a][b-1] = true;
        if(isValid(a, b+1)) br[a][b+1] = 'R', q.push({a,b+1}), vis[a][b+1] = true;
        if(isValid(a+1, b)) br[a+1][b] = 'D', q.push({a+1,b}), vis[a+1][b] = true;
        if(isValid(a-1, b)) br[a-1][b] = 'U', q.push({a-1,b}), vis[a-1][b] = true;
    }
    return false;
}

int main() {
    fastio;
    cin >> n >> m;
    ll x, y;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'A') {
                x = i;
                y = j;
            }
        }
    }

    if(bfs(x, y)) {
        cout << yes << endl;
        
        reverse(path.begin(), path.end());
        cout<<path.size()<<endl;
        for(char it : path) {
            cout << it;
        }
        cout << endl;
    }
    else {
        cout << no << endl;
    }

    return 0;
}