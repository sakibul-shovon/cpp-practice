// File Name: B_Labyrinth.cpp
// Date: 2025-04-30
// Time: 20:59:58

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

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    char grid[n][m];
    pair<ll, ll> start, end;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                start = {i, j};
            else if (grid[i][j] == 'B')
                end = {i, j};
        }
    }

    bool ansFound = false;
    ll vis[n][m];
    memset(vis, 0, sizeof(vis));

    char path[n][m];
    memset(path, 'X', sizeof(path));

    queue<pair<ll, ll>> q;
    q.push({start.first,start.second});
    vis[start.first][start.second] = 1;
    

    while (!q.empty())
    {
        pair<ll, ll> u = q.front();
        q.pop();

        for (ll i = 0; i < 4; i++)
        {
            ll r = u.first + dRow[i];
            ll c = u.second + dCol[i];

            if (r >= 0 and r < n and c >= 0 and c < m and vis[r][c] == 0 and (grid[r][c] == '.' || grid[r][c] == 'B'))

            {
                vis[r][c] = 1;
                q.push({r, c});
                if (u.first == r)
                {
                    if (u.second + 1 == c)
                        path[r][c] = 'R';
                    else
                        path[r][c] = 'L';
                }
                else
                {
                    if (u.first + 1 == r)
                        path[r][c] = 'D';
                    else
                        path[r][c] = 'U';
                }

                if (r == end.first and c == end.second)
                {
                    ansFound = true;
                    break;
                }
            }
        }
    }
  
    
    if(ansFound){
        

        pair<ll, ll> curr = end;
        vector<char> ans;
    
        while (curr != start) {
            char c = path[curr.first][curr.second];
            ans.pb(c);
    
            if (c == 'U') curr.first++;
            else if (c == 'D') curr.first--;
            else if (c == 'L') curr.second++;
            else if (c == 'R') curr.second--;
        }
        

        reverse(all(ans));
        cout<<yes<<endl;
        cout<<ans.size()<<endl;
        for(auto it:ans) cout<<it;
        line;

    }
    else {
        cout<<no<<endl;
    }

   

    return 0;
}