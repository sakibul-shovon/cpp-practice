#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vll vector<long long int>
#define all(x) x.begin(), x.end()
#define While(t) int t; cin>>t;while(t--)

int main() {
    fastio;
    While(t) {
        ll n;
        cin >> n;
        vll first(n), second(n);

        for (ll i = 0; i < n; i++) cin >> first[i];
        for (ll i = 0; i < n; i++) cin >> second[i];

        ll sum1 = 0, sum2 = 0;

        for (ll i = 0; i < n; i++) {
            if (first[i] == second[i]) {
                if (first[i] == 1) {
                    sum1++;
                    sum2++;
                } else if (first[i] == -1) {
                    sum1--;
                    sum2--;
                }
            } else if (first[i] > second[i]) {
                sum1++;
            } else if (second[i] > first[i]) {
                sum2++;
            }
        }

        cout << min(sum1, sum2) << endl;
    }
    return 0;
}
