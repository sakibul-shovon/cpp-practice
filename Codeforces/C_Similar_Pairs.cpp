// File Name: C_Similar_Pairs.cpp
// Date: 2025-04-12
// Time: 02:29:05

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
        vll even, odd;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                even.pb(x);
            else
                odd.pb(x);
        }
        // sort_all(even);
        // sort_all(odd);

        if (even.size() % 2 == 0 and odd.size() % 2 == 0)
        {
            cout << yes << endl;
        }
        else
        {
            bool canPair = false;
            for (ll i = 0; i < odd.size(); i++)
            {
                for (ll j = 0; j < even.size(); j++)
                {
                    if (abs(odd[i] - even[j]) == 1)
                    {
                        canPair = true;
                        break;
                    }
                }
                if (canPair)
                    break;
            }

            if(canPair == true) cout<<yes<<endl;
            else cout<<no<<endl;
            
        }
    }
    return 0;
}