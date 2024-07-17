// File Name: F_Print_Even_Indices.cpp
// Date: 2024-07-09
// Time: 01:27:17

#include <iostream>
#include <vector>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int
#define vll vector<long long int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define autoLoop(x) \
    for (int u : x) \
        cout << u << ' ';
#define line cout << endl;

ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

vll ans;

void fun(vll &v, ll n)
{
    if (n <= 0) return;
    if (n % 2 == 0) {
        ans.pb(v[n - 2]);
        fun(v, n - 2);
    } else {
        ans.pb(v[n - 1]);
        fun(v, n - 2);
    }
}

int main()
{
    fastio;
    ll n;
    cin >> n;

    vll v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    
    fun(v, n);
    autoLoop(ans);
    line;
    return 0;
}
