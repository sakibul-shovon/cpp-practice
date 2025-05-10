// File Name: C_Cherry_Bomb.cpp
// Date: 2025-04-24
// Time: 22:29:10

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll           long long int
#define vll          vector<long long int>
#define vstring      vector<string>
#define pb           push_back
#define all(x)       x.begin(), x.end()
#define sort_all(v)  sort(all(v))
#define space        cout << ' ';
#define line         cout << endl;
#define ok           cout << "ok" << endl;
#define yes          "YES"
#define no           "NO"
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define total(v)     accumulate(v.begin(), v.end(), 0LL)
#define decimal(n)   cout << fixed << setprecision(n);
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    ((a / gcd(a, b)) * b)
#define autoLoop(x)  for (auto u : x) cout << u << ' ';
#define debug(x)     cout << #x << " = " << x << endl;
#define While(t)     int t; cin >> t; while (t--)
#define WhileVecInput(v, n) while (n--) { ll temp; cin >> temp; v.pb(temp); }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n)    for (int i = a; i < n; i++)
#define pqs          priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

int main()
{
    fastio;

    While (t)
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

        if (valid == false)
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
            bool check = true;
            for (ll i = 0; i < n; i++)
            {
                if (second[i] == -1)
                {
                    ll missing = actual - first[i];
                    if (missing < 0 or  missing > k)
                    {
                        check = false;
                        break;
                    }
                }
            }
         
            if(check) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}
