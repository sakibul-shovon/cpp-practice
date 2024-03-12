#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll even = 0, ans = k;

        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (temp % 2 == 0)
                even++;
            if (temp % k == 0)
                ans = 0;
            ans = min(ans, k - temp % k);
        }

        if (k == 4)
        {
            if (even >= 2)
                ans = 0;
            else if (even == 1)
            {
                ans = min(ans, ll(1));
            }
            else
            {
                ans = min(ans, static_cast<ll>(2));
            }
        }

        cout << ans << endl;
    }
    return 0;
}
