// File Name: Make_Odd.cpp
// Date: 2025-01-08
// Time: 21:22:39

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
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int total = 0, both = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == '1' or b[i] == '1') total++;
            if(a[i] == '1' and b[i] == '0') both++;
            if(a[i] == '0' and b[i] == '1') both++;
        }
        
        if(total == 0) cout << "NO"<<endl;
        else if(total % 2 == 1) cout << "YES"<<endl;
        else if(both > 0) cout << "YES"<<endl;
        else cout << "NO"<<endl;;
    }
    return 0;
}