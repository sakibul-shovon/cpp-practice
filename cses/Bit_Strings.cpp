// File Name: Bit_Strings.cpp
// Date: 2024-03-28
// Time: 02:21:32

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define mod          1000000007

ll binpow(ll a, ll b, ll m) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll ans = binpow(2, n, mod);
    cout << ans << endl;
    return 0;
}
// int main()
// {
//     fastio;
//     ll n ;cin>>n;
//     ll ans = 1 ;
//     for(ll i = 1;i<=n;i++)
//     {
//         ans = (ans % mod * 2 % mod) % mod;
//     }
//     cout<<ans<<endl;
//     return 0;
// }