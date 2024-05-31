#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vll          vector<long long int>

int main() {
    fastio;
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        ll n, m;
        cin >> n >> m;
        vll v(n);
        for (ll i = 0; i < n; ++i) {
            cin >> v[i];
        }

        
        ll low = *max_element(v.begin(), v.end()); 
        ll high = LONG_LONG_MAX; 
        ll ans = high;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll sum = 0;
            ll containers = 1;

            for (ll i = 0; i < n; ++i) {
                if (sum + v[i] > mid) {
                    containers++;
                    sum = v[i];
                } else {
                    sum += v[i];
                }
            }

            if (containers <= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;
}
