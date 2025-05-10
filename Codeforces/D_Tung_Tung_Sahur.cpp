// File Name: D_Tung_Tung_Sahur.cpp
// Date: 2025-04-13
// Time: 23:39:39

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

    While(t)
    {
        string p, s;
        cin >> p >> s;

        bool check = true;
        ll i = 0, j = 0;
        ll n = p.size(), m = s.size();

        while (i < n and j < m)
        {
            if (p[i] != s[j])
            {
                check = false;
                break;
            }
            char curr = p[i];
            int P_count = 0;
            while (i < n and p[i] == curr)
            {
                i++;
                P_count++;
            }
            int cnt_s = 0;
            while (j < m and s[j] == curr)
            {
                j++;
                cnt_s++;
            }
            if (cnt_s < P_count or cnt_s > 2 * P_count)
            {
                check = false;
                break;
            }
        }

        if (check and i == n and j == m)
        {
            cout << yes << endl;
        }
        else
        {
            cout << no << endl;
        }
    }
    return 0;
}