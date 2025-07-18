// File Name: B_Shoe_Shuffling.cpp
// Date: 2025-05-30
// Time: 16:28:12

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

int main()
{
    fastio;
    While(t)
    {
        ll n;
        cin >> n;
        vll v(n + 1, 0), ans(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        bool check = true;
        ll i = 1;
        while (i <= n)
        {
            ll j = i;
            while (j <= n and v[i] == v[j])
            {
                j++;//debug(j);
            }
            ll len = j - i;
            if (len == 1)
            {
                check = false;
                break;
            }

            // rotate
            for (ll k = i; k < j; k++)
            {
                if (k == j - 1)
                {
                    ans[k] = i;
                }
                else
                {
                    ans[k] = k + 1;
                }
            }

            i = j;
        }

        if (!check)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 1; i <= n; i++)
                cout << ans[i] << ' ';
            line;
        }
    }
    return 0;
}
