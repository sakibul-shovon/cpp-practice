// File Name: D_Three_Activities.cpp
// Date: 2026-01-11
// Time: 21:20:26

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
        vector<pair<ll, ll>> first(n), second(n), third(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> first[i].first;
            first[i].second = i;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> second[i].first;
            second[i].second = i;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> third[i].first;
            third[i].second = i;
        }

        sort(first.rbegin(), first.rend());
        sort(second.rbegin(), second.rend());
        sort(third.rbegin(), third.rend());

        ll ans = 0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (first[i].second != second[j].second and first[i].second != third[k].second and second[j].second != third[k].second)
                    {
                        ans = max(ans, first[i].first + second[j].first + third[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}