// File Name: C_Racing.cpp
// Date: 2025-05-24
// Time: 21:58:12

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
    While(t)
    {
        ll n;
        cin >> n;
        vll v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        vector<pair<ll, ll>> obs(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> obs[i].first >> obs[i].second;
        }

        ll minn = 0, maxx = 0;
        bool check = true;

        for (ll i = 0; i < n; i++)
        {
            ll a = obs[i].first;
            ll b = obs[i].second;

            if (v[i] == 0)
            {
                if (maxx < a or minn > b)
                {
                    check = false;
                    break;
                }
                minn = max(minn, a);
                maxx = min(maxx, b);
            }
            else if (v[i] == 1)
            {
                minn++;
                maxx++;
                if (maxx < a or minn > b)
                {
                    check = false;
                    break;
                }
                minn = max(minn, a);
                maxx = min(maxx, b);
            }
            else
            {
                bool check1 = (maxx >= a and minn <= b);
                bool check2 = (maxx + 1 >= a and minn + 1 <= b);
                
                if (check1 and check2)
                {
                    if (maxx + 1 <= b)
                    {
                        v[i] = 1;
                        minn++;
                        maxx++;
                    }
                    else
                    {
                        v[i] = 0;
                    }
                }
                else if (check1)
                {
                    v[i] = 0;
                }
                else if (check2)
                {
                    v[i] = 1;
                    minn++;
                    maxx++;
                }
                else
                {
                    check = false;
                    break;
                }
                
                if (check)
                {
                    minn = max(minn, a);
                    maxx = min(maxx, b);
                }
            }
        }

        if (check)
        {
            autoLoop(v);
            line;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}