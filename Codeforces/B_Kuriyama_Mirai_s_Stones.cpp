#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vll          vector<long long int>

int main()
{
    fastio;
    ll n;
    cin >> n;
    vll v(n, 0), prefix(n + 1, 0), sorted_prefix(n + 1, 0);
    
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        prefix[i + 1] = prefix[i] + v[i];
    }
    
    vll sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());
    
    for (ll i = 0; i < n; i++) {
        sorted_prefix[i + 1] = sorted_prefix[i] + sorted_v[i];
    }
    
    ll m;
    cin >> m;
    
    while (m--) {
        ll type, left, right;
        cin >> type >> left >> right;
        ll ans = 0;
        if (type == 1) {
            ans = prefix[right] - prefix[left - 1];
        } else {
            ans = sorted_prefix[right] - sorted_prefix[left - 1];
        }
        cout << ans << endl;
    }
    
    return 0;
}
