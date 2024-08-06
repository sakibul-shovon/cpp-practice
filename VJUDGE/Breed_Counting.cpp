// File Name: Breed_Counting.cpp
// Date: 2024-07-31
// Time: 00:02:59

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vll          vector<long long int>
#define inf          1e18

int main()
{
    fastio;
    ll n, q;
    cin >> n >> q;
    vll v(n + 1, 0);
    vll one(n + 1, 0), two(n + 1, 0), three(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        one[i] = one[i - 1];
        two[i] = two[i - 1];
        three[i] = three[i - 1];

        if (v[i] == 1) {
            one[i]++;
        } else if (v[i] == 2) {
            two[i]++;
        } else if (v[i] == 3) {
            three[i]++;
        }
    }

    while (q--) {
        ll a, b;
        cin >> a >> b;
        cout << one[b] - one[a - 1] << " ";
        cout << two[b] - two[a - 1] << " ";
        cout << three[b] - three[a - 1] << endl;
    }

    return 0;
}
