// File Name: E_Max_GCD_Pair.cpp
// Date: 2025-07-22
// Time: 23:52:26

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
ll n;
ll maxx = -1;

// ll solve(vll &v)
// {
//     vll count(maxx+1,0);

//     for (ll i = 0; i < n; i++)
//     {
//         count[v[i]]++;
//     }

//     for (ll i = maxx; i >= 1; i--)
//     {
//         ll j = i;
//         ll counter = 0;

//         while (j <= maxx)
//         {
//             if (count[j] == 2)
//             {
//                 return j;
//             }
//             else if (count[j] == 1)
//             {
//                 counter++;
//             }

//             j = j +i;

//             if(counter == 2) {
//                 return i;
//             }
//         }
//     }
// }

ll solve(vll &v)
{
    vll count(maxx + 1, 0);

    // Count frequency of all input numbers
    for (ll i = 0; i < n; i++)
    {
        count[v[i]]++;
    }

    // For each possible GCD candidate from maxx down to 1
    for (ll i = maxx; i >= 1; i--)
    {
        ll multiples = 0;

        // Count how many numbers are divisible by i
        for (ll j = i; j <= maxx; j += i)
        {
            multiples += count[j];
            if (multiples >= 2)
                return i;
        }
    }
    return 1;
}
int main()
{
    fastio;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        maxx = max(maxx, v[i]);
    }

    ll ans = solve(v);
    cout<<ans<<endl;
    return 0;
}