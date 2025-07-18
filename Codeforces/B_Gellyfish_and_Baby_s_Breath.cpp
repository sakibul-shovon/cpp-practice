// File Name: B_Gellyfish_and_Baby_s_Breath.cpp
// Date: 2025-05-31
// Time: 22:05:42

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector<long long int>
#define pb push_back
#define mod 998244353

const ll M = 100005;
vector<ll> v(M);

void preCompute() {
    v[0] = 1;
    for(ll i = 1; i < M; i++) {
        v[i] = (v[i-1] * 2) % mod;
    }
}

int main() {
    fastio;
    preCompute();

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll p(n), q(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> q[i];

        for(ll i = 0; i < n; i++) {
            ll maxx = 0;
            for(ll j = 0; j <= i; j++) {
                ll val = (v[p[j]] + v[q[i-j]]) % mod;
                maxx = max(maxx, val);
            }
            cout << maxx << " ";
        }
        line;
    }
    return 0;
}
