// File Name: C_1_Skibidus_and_Fanum_Tax_easy_version.cpp
// Date: 2025-02-10
// Time: 01:26:16

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vint         vector<int>
#define vll          vector<long long int>
#define vstring      vector<string>
#define pb           push_back
#define maxVecElement(a)   (*max_element(all(a)))
#define minVecElement(a)   (*min_element(all(a)))
#define bin_sc(a, x)       binary_search(all(a), x) // 0/1
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define total(v)     accumulate(v.begin(),v.end(),0)
#define decimal(n)   cout<<fixed<<setprecision(n);
#define And          &&
#define Or           ||
#define no           "NO"
#define yes          "YES"

// Direction vectors
int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};

#define For(a, n)        for (int i = a; i < n; i++)
#define ForRev(a, b)     for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb              priority_queue<int>
#define pqs              priority_queue<int, vector<int>, greater<int>>
#define gcd(a, b)        __gcd(a, b)
#define all(x)           x.begin(), x.end()
#define space            cout << ' ';
#define ok               cout << "ok" << endl;
#define in(x)            cin >> x;
#define in2(x, y)        cin >> x >> y;
#define in3(x, y, z)     cin >> x >> y >> z;
#define out(x)           cout << x;
#define out2(x, y)       cout << x << ' ' << y;
#define out3(x, y, z)    cout << x << ' ' << y << ' ' << z;
#define line             cout << endl;
#define sort_all(v)      sort(all(v));
#define autoLoop(x)      for (int u : x) cout << u << ' ';
#define debug(x)         cout << #x << " = " << x << endl;
#define While(t)         int t; cin >> t; while (t--)
#define WhileVecInput(v, n) while (n--) { ll temp; cin >> temp; v.push_back(temp); }

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }



int main() {
    fastio;
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        vll a(n);
        cin >> a[0]; // Since m = 1, we don't need the second array, just b[0]
        ll b;
        cin >> b; // The single element of b
        
        // Read the array a
        for (ll i = 1; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;
        
        // Check for the possibility of sorting the array
        for (ll i = 1; i < n; i++) {
            autoLoop(a);line
            
            if (a[i] < a[i - 1]) {ok
                // If the current element is less than the previous one, check if we can apply the operation
                if (b - a[i-1] <= a[i - 1]) {ok
                    // Apply the operation a[i] := b - a[i] and check if it helps
                    a[i] = b - a[i];
                    if (a[i] < a[i - 1]) {
                        possible = false;
                        break;
                    }
                } else {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << yes << endl;
        } else {
            cout << no << endl;
        }
    }

    return 0;
}
