// File Name: C_Message_Route.cpp
// Date: 2025-04-30
// Time: 23:08:09

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

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);

    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<ll> distance(n + 1, -1);
    vector<ll> prev(n + 1, -1);
    queue<ll> q;
    q.push(1);
    distance[1] = 0;

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (auto it : adj[u])
        {
            if (distance[it] == -1)
            {
                distance[it] = distance[u] + 1;
                prev[it] = u;
                q.push(it);
            }
        }
    }

    vll path;
    ll x = n;
    while (x != -1)
    {
        path.pb(x);
        x = prev[x];
    }
    reverse(all(path));
    if (distance[n] == -1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        cout << path.size() << endl;
        autoLoop(path);
        line;
    }
    return 0;
}