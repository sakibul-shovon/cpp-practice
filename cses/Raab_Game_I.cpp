// File Name: Raab_Game_I.cpp
// Date: 2025-08-13
// Time: 14:43:14

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
        ll n, a, b;
        cin >> n >> a >> b;

        if (a + b > n)
        {
            cout << no << endl;
            continue;
        }
        else if (a == 0 or b == 0)
        {
            cout << no << endl;
            continue;
        }

        if (a > 0 and b > 0)
        {
            cout << yes << endl;

            vll first = {0}, second = {0};
            ll draw = abs(b - a);

            for (ll i = 1; i <= n; i++)
            {
                first.pb(i);
                second.pb(i);
            }

            ll maxx = max(a, b);
            ll minn = min(a, b);

            // debug(maxx);
            // debug(minn);
            ll index = n - (a + b) + 1;
            // debug(index);

            ll count = 0;
            map<ll, ll> mp;
            for (ll i = 1; i <= index - 1; i++)
            {
                mp[i] = 1;
            }

            while (true)
            {
                second[index] = index + 1;
                mp[index + 1] = 1;
                count++;
                index++;
                if (count == maxx)
                {
                    break;
                }
            }
            for (ll i = 1; i <= n; i++)
                cout << first[i] << ' ';
            line;
            for (ll i = 1; i <= a + (n - (a + b)); i++)
            {
                cout << second[i] << ' ';
            }
            for (ll i = 1; i <= n; i++)
            {
                if (mp[i] != 1)
                {
                    cout << i << ' ';
                }
            }
            line;
            // autoLoop(first);
            // line;
            // autoLoop(second);
        }
    }
    return 0;
}