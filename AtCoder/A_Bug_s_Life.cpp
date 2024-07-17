// File Name: A_Bug_s_Life.cpp
// Date: 2024-07-18
// Time: 01:01:18

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>
#define pb push_back
#define maxVecElement(a) (*max_element(all(a)))
#define minVecElement(a) (*min_element(all(a)))
#define bin_sc(a, x) binary_search(all(a), x) // 0/1
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define binpow(a, b) binpow(a, b)
#define binpow_mod(a, b, m) binpow(a, b, m)
#define nCr(n, r) nCr(n, r)
#define nPr(n, r) nPr(n, r)
#define total(v) accumulate(v.begin(), v.end(), 0)
#define decimal(n) cout << fixed << setprecision(n);
#define And &&
#define Or ||
#define no cout << "NO";
#define yes cout << "YES";
#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define gcd(a, b) __gcd(a, b)
#define all(x) x.begin(), x.end()
#define space cout << ' ';
#define ok cout << "ok";
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define sort_all(v) sort(all(v));
#define autoLoop(x) \
    for (int u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " " << x << endl;
#define While(n) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.push_back(temp);  \
    }
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
long nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
long nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

bool BFS(ll source, vector<vll>& Node_vec, vector<int>& color)
{
    queue<ll> q;
    q.push(source);
    color[source] = 0; // Initial color

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();

        for (ll i = 0; i < Node_vec[u].size(); i++)
        {
            ll v = Node_vec[u][i];
            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    fastio;
    ll test = 1;
    While(t)
    {
        ll node, edge;
        cin >> node >> edge;

        vector<vll> Node_vec(node + 1);
        vector<int> color(node + 1, -1); // Initialize all nodes as uncolored

        for (ll i = 1; i <= edge; i++)
        {
            ll a, b;
            cin >> a >> b;
            Node_vec[a].pb(b);
            Node_vec[b].pb(a);
        }

        bool is_bipartite = true;

        for (ll i = 1; i <= node; i++)
        {
            if (color[i] == -1)
            {
                if (!BFS(i, Node_vec, color))
                {
                    is_bipartite = false;
                    break;
                }
            }
        }
        cout<<"Scenario #"<<test++<<":"<<endl;

        if (is_bipartite)
        {
            cout<<"No suspicious bugs found!"<<endl;
        }
        else
        {
            cout << "Suspicious bugs found!" << endl;
        }
    }
    return 0;
}