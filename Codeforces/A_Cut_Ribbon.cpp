// File Name: A_Cut_Ribbon.cpp
// Date: 2025-07-23
// Time: 03:28:39

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

vll v;
ll n;
vll dp(4005, -1);

ll solve(ll x)
{
    if (x == 0 )
    {
        return 0;
    }
    if(x<0){
        return LLONG_MIN;
    }

    // dp[i] = i length re heightst kotovabe kata jabe
    if (dp[x] != -1)
    {
        return dp[x];
    }
    ll ans = LLONG_MIN;
    
    for(ll i=0;i<3;i++){
        ans = max(ans,1+solve(x-v[i]));
    }
    dp[x] = ans;
    return ans;
}

int main()
{
    fastio;
    cin >> n;
    for (ll i = 0; i < 3; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }

    ll ans = solve(n);
    cout << ans << endl;
    return 0;
}