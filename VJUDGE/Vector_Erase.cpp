#include <iostream>
#include <vector>

using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define vll vector<ll>

// Define autoLoop function if needed
void autoLoop(const vll &v) {
    cout << v.size() << endl;
    for (ll i : v) cout << i << " ";
    cout << endl;
}

int main() {
    fastio;
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll t;
    cin >> t;

    
    if (t >= 1 && t <= v.size()) {
        v.erase(v.begin() + t - 1);
    }

    ll a, b;
    cin >> a >> b;

    
    if (a >= 1 && a <= v.size() && b >= a && b <= v.size() + 1) {
        v.erase(v.begin() + a - 1, v.begin() + b - 1);
    }

    
    autoLoop(v);

    return 0;
}
