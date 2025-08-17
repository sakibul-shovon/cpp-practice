// File Name: Sugar_Limit.cpp
// Date: 2025-07-23
// Time: 20:59:57

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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vll taste(n), sugar(n);
        ll maxSugar = 0;
        
        for (ll i = 0; i < n; i++)
            cin >> taste[i];
        for (ll i = 0; i < n; i++)
        {
            cin >> sugar[i];
            maxSugar = max(maxSugar, sugar[i]);
        }

        ll ans = 0; 
        
        
        for(ll L = 1; L <= maxSugar; L++)
        {
            ll count = 0;
            
            
            for(ll i = 0; i < n; i++)
            {
                if(taste[i] > 0 and sugar[i] <= L)
                {
                    count += taste[i];
                }
            }
            
            ll x = count - L;
            ans = max(ans, x);
        }
        
        cout << ans << endl;
    }
    return 0;
}
