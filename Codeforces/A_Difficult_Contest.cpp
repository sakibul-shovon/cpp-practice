// File Name: A_Difficult_Contest.cpp
// Date: 2025-07-22
// Time: 21:14:37

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define vll vector<long long int>
#define vstring vector<string>
#define pb push_back
#define all(x) x.begin(), x.end()
#define sort_all(v) sort(all(v))
#define space cout << ' ';
#define line cout << endl;
#define ok cout << "ok" << endl;
#define yes "YES"
#define no "NO"
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define total(v) accumulate(v.begin(), v.end(), 0LL)
#define decimal(n) cout << fixed << setprecision(n);
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define autoLoop(x)  \
    for (auto u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " = " << x << endl;
#define While(t) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.pb(temp);         \
    }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n) for (int i = a; i < n; i++)
#define pqs priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

int main()
{
    fastio;
    While(T)
    {
        string s;
        cin >> s;
        map<char, ll> mp;
        for (char c : s)
            mp[c]++;
        string ans;
        while (mp['T']--)
            ans += 'T';
        while (mp['F']--)
            ans += 'F';
        while (mp['N']--)
            ans += 'N';
        for (char c = 'A'; c <= 'Z'; c++)
        {
            if (c != 'T' and c != 'F' and c != 'N')
            {
                while (mp[c]--)
                    ans += c;
            }
        }
        bool check = true;
        for (ll i = 0; i + 2 < ans.size(); i++)
        {
            if ((ans[i] == 'F' and ans[i + 1] == 'F' and ans[i + 2] == 'T') or (ans[i] == 'N' and ans[i + 1] == 'T' and ans[i + 2] == 'T'))
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << ans << endl;
        }
        else
        {
            ans.clear();
            for (char c = 'A'; c <= 'Z'; c++)
                mp[c] = 0;
            for (char c : s)
                mp[c]++;
            while (mp['F']--)
                ans += 'F';
            while (mp['T']--)
                ans += 'T';
            while (mp['N']--)
                ans += 'N';
            for (char c = 'A'; c <= 'Z'; c++)
            {
                if (c != 'T' and c != 'F' and c != 'N')
                {
                    while (mp[c]--)
                        ans += c;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}