// File Name: A_Counting_Rooms.cpp
// Date: 2025-04-30
// Time: 18:56:53

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define vll vector<long long int>
#define vstring vector<string>
#define pb push_back
#define all(x) x.begin(), x.end()
#define sort_all(v) sort(all(v))
#define space cout << ' ';
#define line cout << endl;
#define ok cout << "ok" << endl;
#define yes "YES"
#define no "NO"
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define total(v) accumulate(v.begin(), v.end(), 0LL)
#define decimal(n) cout << fixed << setprecision(n);
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define autoLoop(x)  \
    for (auto u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " = " << x << endl;
#define While(t) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.pb(temp);         \
    }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n) for (int i = a; i < n; i++)
#define pqs priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

ll n, m;

void bfs(ll row, ll col, vector<vector<ll>> &vis, vector<string> &grid)
{
    queue<pair<ll, ll>> q;
    q.push({row, col});
    vis[row][col] = 1;

    while (!q.empty())
    {
        pair<ll, ll> u = q.front();
        q.pop();

        for (ll i = 0; i < 4; i++)
        {
            ll r = u.first + dRow[i];
            ll c = u.second + dCol[i];

            if (r>=0 and r < n and c >= 0 and c < m and grid[r][c] == '.' and !vis[r][c])
            {
                vis[r][c] = 1;
                q.push({r,c});

            }
        }
    }
}
int main()
{
    fastio;
    cin >> n >> m;
    vector<string> grid(n);
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    ll count = 0;

    for (ll i = 0; i < n; i++)
        cin >> grid[i];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' and !vis[i][j])
            {
                bfs(i, j, vis, grid);
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}