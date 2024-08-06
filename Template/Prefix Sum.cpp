#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
long long pref_sum[N];
int a[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    pref_sum[i] = pref_sum[i - 1] + a[i];
  }
  while (q--) {
    int l, r; cin >> l >> r;
    cout << pref_sum[r] - pref_sum[l - 1] << '\n';
  }
  return 0;
}
// https://cses.fi/problemset/task/1646/

int main()
{
    fastio;
    ll n,q;cin>>n>>q;
    vll v(n+1,0);
    vll prefix(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        prefix[i] = prefix[i-1] + v[i];
    }

    while(q--){
        ll left,right;cin>>left>>right;
        ll ans;
        if(left == 0) ans = prefix[right];
        else{
            ans = prefix[right] - prefix[left - 1];
        }
        cout<<ans<<endl;
    }
    return 0;
}
