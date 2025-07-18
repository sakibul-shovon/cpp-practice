#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
const int MOD=1e9+7;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    ll total = 0;
    for (int i = 0; i < n; i++) {
        int right = a[i] + k;
        int index = lower_bound(a.begin(), a.end(), right) - a.begin();
        if (index == n || a[index] != right)
            index--;
        ll between = index - i - 1;
        total += ((between) * (between + 1)) / (2LL);
    }
    cout << total;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    solve();
}