#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

int main() {
    fastio;
    ll n, k;
    cin >> n >> k;
    
    vector<pair<ll, ll>> medicines(n);
    for (ll i = 0; i < n; i++) {
        cin >> medicines[i].first >> medicines[i].second;
    }

    // Sort by the starting day of each medicine
    sort(medicines.begin(), medicines.end());

    ll current_day = 0;
    ll total_pills = 0;

    for (const auto& med : medicines) {
        ll start_day = med.first;
        ll pills = med.second;

        // Check if total pills before this medicine's start day are <= K
        if (total_pills <= k) {
            cout << current_day + 1 << endl;
            return 0;
        }

        // Update the current day to the start of this medicine
        current_day = start_day;

        // Add the pills to the total count
        total_pills += pills;
    }

    // If we finish processing all medicines, check the final day
    if (total_pills <= k) {
        cout << current_day + 1 << endl;
    } else {
        cout << current_day + 1 << endl;
    }

    return 0;
}
