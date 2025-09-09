#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;
static const long long INV2 = 499122177; // (MOD+1)/2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        bool hasBig = false; // any Ai >= 2
        int ones = 0;
        for (int i = 0; i < N; ++i) {
            int a; cin >> a;
            if (a >= 2) hasBig = true;
            else ones++;
        }

        long long ans;
        if (hasBig) {
            ans = INV2;              // 1/2 mod MOD
        } else {
            ans = (N & 1) ? 1 : 0;   // all ones: Alice wins iff N is odd
        }
        cout << ans << '\n';
    }
    return 0;
}
