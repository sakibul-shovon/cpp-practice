// File Name: C_Ski_Resort.cpp
// Date: 2025-06-04
// Time: 03:23:44

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

int main()
{
    fastio;
    While(T)
    {
        ll n, day, temp;
        cin >> n >> day >> temp;

        vll v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll ans = 0;
        ll first = 0;

        while (first < n)
        {

            while (first < n and v[first] > temp)
            {
                first++;
            }

            ll second = first;
            while (second < n and v[second] <= temp)
            {
                second++;
            }

            ll count = second - first;

            if (count >= day)
            {
                ll len = count - day + 1;
                ans += (len * (len + 1)) / 2;
            }

            first = second + 1;
        }

        cout << ans << endl;
    }
    return 0;
}
