// File Name: C_Stripes.cpp
// Date: 2024-01-04
// Time: 21:45:03

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
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        int n = 8;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        char c = '.';

        for (int i = 0; i < n; i++)
        {
            if (count(s[i].begin(), s[i].end(), 'R') == n)
            {
                c = 'R';
                break;
            }
        }

        if (c == '.')
        {
            for (int j = n - 1; j >= 0; j--)
            {
                bool check = false;
                for (int i = 0; i < n; i++)
                {
                    if (s[i][j] != 'B')
                    {
                        check = true;
                        break;
                    }
                }
                if (check == false)
                {
                    c = 'B';
                    break;
                }
            }
        }

        cout << c << endl;
    }
    return 0;
}