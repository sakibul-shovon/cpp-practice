#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

ll factorial(ll n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    fastio;
    ll n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
