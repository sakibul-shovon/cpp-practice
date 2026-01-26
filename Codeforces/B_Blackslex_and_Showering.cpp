// File Name: B_Blackslex_and_Showering.cpp
<<<<<<< HEAD
// Date: 2025-12-23
// Time: 20:56:58
=======
// Date: 2025-12-24
// Time: 10:43:01
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
<<<<<<< HEAD
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
=======
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
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
<<<<<<< HEAD
        v.pb(temp);         \
    }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n) for (int i = a; i < n; i++)
#define pqs priority_queue<ll, vector<ll>, greater<ll>>

=======
        v.push_back(temp);  \
    }
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
<<<<<<< HEAD
=======
ll binPowMod(ll n, ll p, ll m)
{
    n %= m;
    return p == 0 ? 1 : (p % 2 == 0 ? binPowMod((n * n) % m, p / 2, m) : (n * binPowMod((n * n) % m, (p - 1) / 2, m)) % m);
}
#define read(v)                       \
    for (ll i = 0; i < v.size(); i++) \
        cin >> v[i];
#define pairLoop(x)  \
    for (auto u : x) \
        cout << u.first << ' ' << u.second << endl;
int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a

int main()
{
    fastio;
    While(T)
    {
        ll n;
        cin >> n;
        vll v(n);
        for (ll i = 0; i < n; i++)
<<<<<<< HEAD
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
=======
            cin >> v[i];

        ll total_sum = 0;
        for (ll i = 1; i < n; i++)
        {
            total_sum += abs(v[i] - v[i - 1]);
        }
        ll minn = inf;
        // debug(total_sum);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            if (i == 0)
            {
                x = total_sum - abs(v[1] - v[0]);
            }
            else if (i == n - 1)
            {
                x = total_sum - abs(v[n - 1] - v[n - 2]);
            }
            else
            {
                ll a = abs(v[i+1]-v[i]);
                ll b = abs(v[i] - v[i-1]);
                ll c = abs(v[i+1]-v[i-1]);
                x = total_sum - a-b+c;
            }
            // debug(x);
            minn = min(x,minn);
        }
        // debug(minn);
        cout<<minn<<endl;
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a
    }
    return 0;
}