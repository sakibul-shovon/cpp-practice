// File Name: C_Traffic_Light.cpp
<<<<<<< HEAD
// Date: 2025-06-25
// Time: 16:39:47
=======
// Date: 2025-06-24
// Time: 21:05:47
>>>>>>> fb428807d788dcd44db300692b20dec760edaaf2

#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
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
=======
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
>>>>>>> fb428807d788dcd44db300692b20dec760edaaf2

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

<<<<<<< HEAD
int main()
{
    fastio;
    While(t)
    {
        ll n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;

        s += s;
        if(ch == 'g') {
            cout<<0<<endl;
            continue;
        }
        if(n == 1){
            if(ch == s[0] or ch == 'g'){
                cout<<0<<endl;
            } else {
                cout<<1<<endl;  
            }
            continue;
        }
        else{
            
        }

        ll first = 0, second = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                first = i;
                second = i;
                break;
            }
        }

        ll maxx = -1;
        while (true)
        {
            if (first == second)
            {
                second = first + 1;
            }

            while (s[second] != 'g')
            {
                second++;
            }

            if (s[first] == ch)
            {
                // debug(first);
                // debug(second);
                // line;

                ll x = abs(second - first);

                maxx = max(maxx, x);
            }
            first++;

            if (first == n)
                break;
        }

        cout << maxx << endl;
=======
int main() {
    fastio;
    While(t){
        ll n;
        char c;
        cin>>n>>c;
        string s;cin>>s;
        s+=s;
        for()
>>>>>>> fb428807d788dcd44db300692b20dec760edaaf2
    }
    return 0;
}