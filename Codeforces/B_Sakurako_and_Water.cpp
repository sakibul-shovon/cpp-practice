// File Name: B_Sakurako_and_Water.cpp
// Date: 2024-10-26
// Time: 02:27:58

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
#define maxVecElement(a) (*max_element(all(a)))
#define minVecElement(a) (*min_element(all(a)))
#define bin_sc(a, x) binary_search(all(a), x) // 0/1
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define binpow(a, b) binpow(a, b)
#define binpow_mod(a, b, m) binpow(a, b, m)
#define nCr(n, r) nCr(n, r)
#define nPr(n, r) nPr(n, r)
#define total(v) accumulate(v.begin(), v.end(), 0)
#define decimal(n) cout << fixed << setprecision(n);
#define And &&
#define Or ||
#define no cout << "NO";
#define yes cout << "YES";
#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define gcd(a, b) __gcd(a, b)
#define all(x) x.begin(), x.end()
#define space cout << ' ';
#define ok cout << "ok";
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
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

int main()
{
    fastio;
    While(b)
    {
        ll n;
        cin >> n;
        ll arr[n + 1][n + 1] = {0};
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll ans = 0;

        ll T = n;

        ll m = n; // jindex
        ll x = 1;
        while (T--)
        {
            ll minn = LLONG_MAX;
            for (ll i = x, j = 1; i <= n, j <= m; i++, j++)
            {
                if (arr[i][j] < 0)
                {
                    minn = min(minn, arr[i][j]);
                }
            }
            // cout<<endl;
            x++;
            m--;
            if (minn != LLONG_MAX)
            {
                ans += minn;
            }
        }
        // line;
        // cout<<"2nd Step"<<endl;
        //  main diagonal er uporer part
        ll TT = n - 1; // n-1
        ll iIndx = n;
        ll jindx = 2;
        while (TT--)
        {
            ll minn = LLONG_MAX;
            for (ll i = 1, j = jindx; i <= iIndx, j <= n; i++, j++)
            {
                if (arr[i][j] < 0)
                {
                    minn = min(minn, arr[i][j]);
                }
            }

            jindx++;
            if (minn != LLONG_MAX)
            {
                ans += minn;
            }
        }

        cout << abs(ans) << endl;
    }

    return 0;
}