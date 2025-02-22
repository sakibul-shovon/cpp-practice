#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vll vector<long long int>
#define all(x) x.begin(), x.end()

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vll v(n);
        map<ll, ll> freq;

        // Count frequencies of all elements
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
        }

        // Frequency of K
        ll freqK = freq[k];
        // Find the maximum frequency of any element other than K
        ll maxOtherFreq = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->first != k) {
                maxOtherFreq = max(maxOtherFreq, it->second);
            }
        }

        // Calculate the number of operations needed
        ll operations = 0;
        if (maxOtherFreq >= freqK) {
            operations = maxOtherFreq - freqK + 1; // We need to remove enough elements to make K the most frequent
        }

        cout << operations << endl;
    }
    return 0;
}