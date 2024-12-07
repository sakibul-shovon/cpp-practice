#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vll vector<long long int>

ll countAndMerge(vector<ll> &v, ll l, ll m, ll r) {
    ll n1 = m - l + 1, n2 = r - m;
    vll left(n1), right(n2);
    for (ll i = 0; i < n1; i++) left[i] = v[i + l];
    for (ll i = 0; i < n2; i++) right[i] = v[m + 1 + i];

    ll ans = 0;
    ll i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            v[k++] = left[i++];
        } else {
            v[k++] = right[j++];
            ans += n1 - i;
        }
    }
    while (i < n1) {
        v[k++] = left[i++];
    }
    while (j < n2) {
        v[k++] = right[j++];
    }
    return ans;
}

ll countInv(vector<ll> &v, ll l, ll r) {
    ll res = 0;
    if (l < r) {
        ll m = (r + l) / 2;
        res += countInv(v, l, m);
        res += countInv(v, m + 1, r);
        res += countAndMerge(v, l, m, r);
    }
    return res;
}

ll invCount(vector<ll> &v) {
    ll n = v.size();
    return countInv(v, 0, n - 1);
}

int main() {
    fastio;
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string line;
        getline(cin, line); 
        ll n;
        cin >> n;
        vll v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        getline(cin, line); 
        ll ans = invCount(v);
        cout << ans << endl;
    }
    return 0;
}
