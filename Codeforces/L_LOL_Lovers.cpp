// File Name: L_LOL_Lovers.cpp
// Date: 2023-12-21
// Time: 20:07:09

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

#define ll long long int
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>

#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define mod 1000000007
#define inf 1e18
#define PI 3.141592653589793238462

#define endl "\n"
#define no "NO"
#define yes "YES"
#define And &&
#define Or ||

#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define gcd(a, b) __gcd(a, b);
#define isEven(n) ((n % 2) == 0);

#define all(x) x.begin(), x.end()
#define space cout << ' ';

#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define sort_all(v) sort(all(v));
#define autoLoop(x) \
    for (int u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " " << x << endl;
#define While(n) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        int temp;           \
        cin >> temp;        \
        v.push_back(temp);  \
    }

int main()
{
    fastio;
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll L_count = 0, O_count = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            L_count++;
        else
        {
            O_count++;
        }
    }

    ll L_temp = 0, O_temp = 0;
    for (ll i = 0; i < n-1; i++)
    {
        if (s[i] == 'L')
        {
            L_temp++;
            L_count--;
        }
        else if (s[i] == 'O')
        {
            O_temp++;
            O_count--;
        }
      

        if( (L_count != L_temp) && (O_count != O_temp)){
            cout<<i+1<<endl;return 0;
        }
    }

    cout << -1 << endl;
}