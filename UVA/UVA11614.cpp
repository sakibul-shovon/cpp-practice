#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

int main() {
    fastio;
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;

        ll low = 0;
        ll high = 2e9; 

        ll result = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll temp = (mid * (mid + 1)) / 2;

            if (temp <= n) {
                result = mid; 
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }

        cout << result << endl;
    }

    return 0;
}
