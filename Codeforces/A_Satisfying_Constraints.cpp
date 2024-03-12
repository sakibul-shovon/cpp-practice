// File Name: A_Satisfying_Constraints.cpp
// Date: 2024-01-13
// Time: 20:42:03

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

#define ll long long int
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>

#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define mod 1000000007
#define inf 1e18
#define PI 3.141592653589793238462

#define endl "\n"
#define no "NO"
#define yes "YES"
#define And &&
#define Or ||

#define all(x) x.begin(), x.end()
#define space cout << ' ';

#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define sort_all(v) sort(all(v));
#define autoLoop(x) \
    for (int u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " " << x << endl;
#define While(n) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.push_back(temp);  \
    }
int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll maxx = inf, minn = LLONG_MIN;
        ll t = 0;
        for (int i = 0; i < n; i++)
        {
            ll a, x;
            cin >> a >> x;
            if (a == 1)
            {
                minn = max(x, minn);
            }
            else if (a == 2)
            {
                maxx = min(x, maxx);
            }
            else if (a == 3)
            {
                v.pb(x);
            }
        }

        if (minn > maxx)
        {
            cout << 0 << endl;
            continue;
        }

        ll count = 0;

        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] >= minn and v[i] <= maxx)
            {
                count++;
            }
        }

        //debug(count);

        cout << maxx - minn + 1 - count << endl;
    }
    return 0;
}