#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define pb push_back

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;
        v.reserve(n); 

        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.pb({a, b});
        }

        sort(v.begin(), v.end(), comp);

        for (const auto& it : v)
        {
            cout << it.first << " " << it.second << "\n"; 
        }
    }
    return 0;
}