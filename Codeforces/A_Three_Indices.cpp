// File Name: A_Three_Indices.cpp
// Date: 2024-11-24
// Time: 16:29:21

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

#define ll long long int
#define vll vector<long long int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define no "NO"
#define yes "YES"

int main()
{
    fastio;
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vll p(n);
        for (ll i = 0; i < n; i++)
            cin >> p[i];

        bool found = false;

        for (ll j = 1; j < n - 1; j++)
        {
            if (p[j - 1] < p[j] && p[j] > p[j + 1])
            {
                cout << yes << endl;
                cout << j << ' ' << j + 1 << ' ' << j + 2 << endl; 
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << no << endl;
        }
    }
    return 0;
}
