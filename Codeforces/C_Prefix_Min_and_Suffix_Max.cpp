// File Name: C_Prefix_Min_and_Suffix_Max.cpp
// Date: 2025-08-11
// Time: 02:07:53

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
#define autoLoop(x) for (auto u : x) cout << u << ' ';
#define debug(x) cout << #x << " = " << x << endl;
#define While(t) int t; cin >> t; while (t--)
#define WhileVecInput(v, n) while (n--) { ll temp; cin >> temp; v.pb(temp); }

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
        {
            cin >> v[i];
        }

        vll prefixMin(n), suffixMax(n);

        prefixMin[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            prefixMin[i] = min(prefixMin[i - 1], v[i]);
        }

        suffixMax[n - 1] = v[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            suffixMax[i] = max(suffixMax[i + 1], v[i]);
        }

        string s(n, '0');
        s[0] = '1';
        s[n - 1] = '1';

        for (ll i = 1; i < n - 1; i++)
        {
            if (v[i] > prefixMin[i - 1] and v[i] < suffixMax[i + 1])
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
        }

        cout << s << endl;
    }
    return 0;
}
