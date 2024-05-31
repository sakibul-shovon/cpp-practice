// File Name: L_L.cpp
// Date: 2024-05-27
// Time: 01:26:57

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define mod          1000000007

map<ll, ll> mp;

void primeFactors(ll n) {
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            n /= i;
            mp[i]++;
        }
    }
    if (n != 1) {
        mp[n]++;
    }
}

int main() {
    fastio;
    int n;
    cin >> n;

    for (ll i = 2; i <= n; i++) {
        primeFactors(i);
    }

    ll ans = 1;

    for (auto it : mp) {
        ans = (ans * (it.second + 1)) % mod;
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout << ans << endl;

    return 0;
}
