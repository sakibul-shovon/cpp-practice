// File Name: Flight_Routes_Check.cpp
// Date: 2025-12-09
// Time: 16:39:46

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

const ll MAXX = 200005;
vll graph[MAXX], rev_graph[MAXX];
vll vis(MAXX, 0);

void bfs(ll start, vll g[])
{
    queue<ll> q;
    q.push(start);
    vis[start] = 1;

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (auto it : g[u])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        graph[a].pb(b);
        rev_graph[b].pb(a);
    }
    bfs(1, graph);
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << "NO" << endl;
            cout << 1 << ' ' << i << endl;
            return 0;
        }
    }

    for (ll i = 1; i <= n; i++)
        vis[i] = 0;

    bfs(1, rev_graph);
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << "NO" << endl;
            cout << i << ' ' << 1 << endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}