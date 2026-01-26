// File Name: B_Blackslex_and_Showering.cpp
// Date: 2025-12-23
// Time: 20:56:58

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
    While(T)
    {
        ll n;
        cin >> n;
        vll v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        
        ll total = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            total += abs(v[i] - v[i + 1]);
        }
        ll maxx = -1;
        for (ll i = 0; i < n; i++)
        {
            ll x = 0;
            if (i == 0)
            {
                x = abs(v[0] - v[1]);
            }
            else if (i == n - 1)
            {
                x = abs(v[n - 2] - v[n - 1]);
            }
            else
            {
                ll a = abs(v[i - 1] - v[i]) + abs(v[i] - v[i + 1]);
                ll b = abs(v[i - 1] - v[i + 1]);
                x = a - b; 
            }
            maxx = max(maxx, x);
            // debug(maxx);
        }
        cout << total - maxx << endl;
    }
    return 0;
}