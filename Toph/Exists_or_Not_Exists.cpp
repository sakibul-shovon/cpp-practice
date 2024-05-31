#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define line cout << endl;
#define yes cout << "YES"; line;
#define no cout << "NO"; line;

int main() {
    fastio;
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<ll, set<ll>> mp;

    for (ll i = 0; i < n; i++) {
        mp[v[i]].insert(i + 1);
    }

    while (q--) {
        ll low, high, key;
        cin >> low >> high >> key;

        auto it = mp.find(key);
        
        if (it != mp.end()) {
            auto& value = it->second;
            auto lb = value.lower_bound(low);
            
            if (lb != value.end() && *lb <= high) {
                yes;
            } else {
                no;
            }
        } else {
            no;
        }
    }

    return 0;
}
