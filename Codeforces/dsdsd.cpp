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

int main() {
    fastio;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++) {
        ll n, l, r;
        cin >> n >> l >> r;
        l--; r--;

        vll v(n), first, last;
        for (ll j = 0; j < n; j++) {
            cin >> v[j];
            if (j <= r) first.pb(v[j]);
            if (j >= l) last.pb(v[j]);
        }

        sort_all(first);
        sort_all(last);

        ll leftS = 0, rightSum = 0;
        ll lLim = min(r - l + 1, (ll)first.size());
        ll rightL = min(r - l + 1, (ll)last.size());

        for (ll j = 0; j < lLim; j++) leftS += first[j];
        for (ll j = 0; j < rightL; j++) rightSum += last[j];

        

        cout << min(leftS, rightSum) << endl;
    }
    return 0;
}