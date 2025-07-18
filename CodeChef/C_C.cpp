#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int

void solve()
{
    ll a, b;
    cin >> a >> b;
    
    while (a % 3)
    {
        a++;
        if (a > b)
        {
            cout << 0 << endl;
            return;  
        }
    }

    while (b % 3)
    {
        b--;
        if (b < a)
        {
            b = a;
            break;
        }
    }
    
    ll ans = ((b - a) / 3) + 1;
    cout << ans << endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}