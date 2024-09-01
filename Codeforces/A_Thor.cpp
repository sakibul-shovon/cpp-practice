#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vll vector<long long int>

int main()
{
    fastio;
    ll n, q;
    cin >> n >> q;
    map<ll, ll> mp; 
    vll v; 
    ll unread_count = 0; 
    ll read_upto = 0; 

    for (ll i = 0; i < q; i++)
    {
        ll option, app;
        cin >> option;

        if (option == 1)
        {
           
            cin >> app;
            v.push_back(app);
            mp[app]++;
            unread_count++;
            cout << unread_count << endl;
        }
        else if (option == 2)
        {
           
            cin >> app;
            unread_count -= mp[app];
            mp[app] = 0;
            cout << unread_count << endl;
        }
        else if (option == 3)
        {
            
            cin >> app; // Here, 'app' acts as 't'
            while (read_upto < app)
            {
                ll current_app = v[read_upto];
                if (mp[current_app] > 0)
                {
                    mp[current_app]--;
                    unread_count--;
                }
                read_upto++;
            }
            cout << unread_count << endl;
        }
    }

    return 0;
}
