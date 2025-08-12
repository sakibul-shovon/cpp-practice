// File Name: A_Mix_Mex_Max.cpp
// Date: 2025-08-07
// Time: 21:07:20

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



bool is_good_triplet(int x, int y, int z) {
    // Calculate MEX
    int has0 = 0, has1 = 0, has2 = 0, has3 = 0;

    if (x == 0 || y == 0 || z == 0) has0 = 1;
    if (x == 1 || y == 1 || z == 1) has1 = 1;
    if (x == 2 || y == 2 || z == 2) has2 = 1;
    if (x == 3 || y == 3 || z == 3) has3 = 1;

    int my_mex;
    if (has0 == 0) {
        my_mex = 0;
    } else if (has1 == 0) {
        my_mex = 1;
    } else if (has2 == 0) {
        my_mex = 2;
    } else if (has3 == 0) {
        my_mex = 3;
    } else {
        my_mex = 4;
    }

    // Calculate max manually
    int mx = x;
    if (y > mx) mx = y;
    if (z > mx) mx = z;

    // Calculate min manually
    int mn = x;
    if (y < mn) mn = y;
    if (z < mn) mn = z;

    // Check condition
    if (my_mex == (mx - mn)) {
        return true;
    } else {
        return false;
    }
}

bool can_be_good(int a[], int n) {
    for (int i = 0; i <= n - 3; i++) {
        int t1 = a[i];
        int t2 = a[i+1];
        int t3 = a[i+2];
        bool possible = false;

        for (int x = 0; x <= 4; x++) {
            for (int y = 0; y <= 4; y++) {
                for (int z = 0; z <= 4; z++) {
                    bool ok = true;

                    if (t1 != -1 && t1 != x) ok = false;
                    if (t2 != -1 && t2 != y) ok = false;
                    if (t3 != -1 && t3 != z) ok = false;

                    if (ok && is_good_triplet(x, y, z)) {
                        possible = true;
                        break;
                    }
                }
                if (possible) break;
            }
            if (possible) break;
        }

        if (!possible) return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[105];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (can_be_good(a, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
