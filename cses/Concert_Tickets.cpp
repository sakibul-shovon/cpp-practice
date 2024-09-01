#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

int main() {
    fastio;
    ll n, q;
    cin >> n >> q;

    multiset<ll> tickets;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        tickets.insert(x);
    }

    while (q--) {
        ll x;
        cin >> x;
        auto it = tickets.lower_bound(x + 1); 

        if (it == tickets.begin()) {
            cout << -1 << endl; 
        } else {
            --it; 
            cout << *it << endl; 
            tickets.erase(it); 
        }
    }

    return 0;
}
