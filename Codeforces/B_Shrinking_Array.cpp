#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define vll vector<long long int>
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

int main() {
    fastio

    While(t) {
        ll n;
        cin >> n;
        vll v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        bool check = false;

        for (ll i = 0; i < n - 1; i++) {
            if (abs(v[i] - v[i + 1]) <= 1) {
                check = true;
                break;
            }
        }

        if (check) {
            cout << 0 << endl;
            continue;
        }

        if (n == 2) {
            cout << -1 << endl;
            continue;
        }

        bool possible = false;

        
        for (ll i = 0; i < n - 1; i++) {
            ll a = v[i], b = v[i + 1];
            
            
            if (i > 0) {
                ll left = v[i - 1];
                if (left >= min(a, b) - 1 and left <= max(a, b) + 1) {
                    possible = true;
                    break;
                }
            }
            
           
            if (i + 2 < n) {
                ll right = v[i + 2];
                if (right >= min(a, b) - 1 and right <= max(a, b) + 1) {
                    possible = true;
                    break;
                }
            }
        }

        if (possible) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}