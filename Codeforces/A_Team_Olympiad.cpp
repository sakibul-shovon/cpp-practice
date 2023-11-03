// File Name: A_Team_Olympiad.cpp
// Date: 2023-10-30
// Time: 20:47:10

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
    vector<int> one;
    vector<int> two;
    vector<int> three;
    int i= 1;
    while (t--)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 1)
            one.push_back(i);
        else if (tmp == 2)
            two.push_back(i);
        else if (tmp == 3)
            three.push_back(i);

        i++;
    }

    int ans = min(three.size(), min(one.size(), two.size()));
    cout << ans<<endl;
    if (ans < 1)
    {
        
        return 0;
    }

    while (ans--)
    {
        cout << one[0] << " " << two[0] << " " << three[0];
        one.erase(one.begin());
        two.erase(two.begin());
        three.erase(three.begin());
        line
    }

    return 0;
}