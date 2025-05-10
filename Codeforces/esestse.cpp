// File Name: C_Cherry_Bomb.cpp
// Date: 2025-04-24
// Time: 21:33:39

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define inf 1e18

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> first(n), second(n);
        ll maxx = -1, minn = inf;

        for (ll i = 0; i < n; i++)
        {
            cin >> first[i];
            maxx = max(maxx, first[i]);
            minn = min(minn, first[i]);
        }

        bool all_k_minus1 = true;
        bool valid = true;
        ll actual = -1;

        for (ll i = 0; i < n; i++)
        {
            cin >> second[i];
            if (second[i] != -1)
            {
                all_k_minus1 = false;
                if (actual == -1)
                {
                    actual = first[i] + second[i];
                }
                else
                {
                    if (first[i] + second[i] != actual)
                    {
                        valid = false;
                    }
                }
            }
        }

        if (!valid)
        {
            cout << 0 << endl;
            continue;
        }

        if (all_k_minus1)
        {
            ll low = maxx;
            ll high = minn + k;
            if (low > high)
                cout << 0 << endl;
            else
                cout << high - low + 1 << endl;
        }
        else
        {
            bool ok = true;
            for (ll i = 0; i < n; i++)
            {
                if (second[i] == -1)
                {
                    ll missing = actual - first[i];
                    if (missing < 0 || missing > k)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            cout << (ok ? 1 : 0) << endl;
        }
    }
    return 0;
}
