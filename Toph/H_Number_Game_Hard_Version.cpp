#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int
#define vll vector<long long int>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)

int main()
{
    fastio;
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll q;
    cin >> q;
    while (q--)
    {
        ll k;
        cin >> k;
        vll divisors(k);
        for (ll i = 0; i < k; i++)
            cin >> divisors[i];

        ll lcmm = divisors[0];
        for (ll i = 1; i < k; i++)
        {
            lcmm = lcm(lcmm, divisors[i]);
            if (lcmm > 1e9) break;
        }

        if (lcmm > 1e9)
        {
            cout << 0 << endl;
            continue;
        }

        ll count = 0;
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            ll remainder = v[i] % lcmm;
            count += freq[(lcmm - remainder) % lcmm];
            freq[remainder]++;
        }

        cout << count << endl;
    }

    return 0;
}