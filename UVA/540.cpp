#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int

int main()
{
    fastio;
    int T;
    cin >> T;

    while (T--)
    {
        ll a;
        cin >> a;
        map<ll, ll> mp; // Element to team ID map

        for (ll i = 0; i < a; i++)
        {
            ll x;
            cin >> x;
            mp[x] = 1; // Team 1
        }

        ll b;
        cin >> b;
        for (ll i = 0; i < b; i++)
        {
            ll x;
            cin >> x;
            mp[x] = 2; // Team 2
        }

        queue<ll> firstQ, secondQ;
        bool firstIndex = false;
        ll whoFirst = 0;

        while (true)
        {
            string s;
            cin >> s;
            if (s == "STOP")
                break;
            ll n;
            if (s[0] != 'D')
            {

                cin >> n;
            }

            if (!firstIndex)
            {
                if (mp[n] == 1)
                    whoFirst = 1;
                else
                    whoFirst = 2;
                firstIndex = true;
            }

            if (s == "ENQUEUE")
            {
                if (mp[n] == 1)
                {
                    firstQ.push(n);
                }
                else if (mp[n] == 2)
                {
                    secondQ.push(n);
                }
            }
            else if (s == "DEQUEUE")
            {
                if (whoFirst == 1 && !firstQ.empty())
                {
                    cout << firstQ.front() << endl;
                    firstQ.pop();
                }
                else if (whoFirst == 2 && !secondQ.empty())
                {
                    cout << secondQ.front() << endl;
                    secondQ.pop();
                }
                else if (whoFirst == 1 && secondQ.empty() && !firstQ.empty())
                {
                    cout << firstQ.front() << endl;
                    firstQ.pop();
                }
                else if (whoFirst == 2 && firstQ.empty() && !secondQ.empty())
                {
                    cout << secondQ.front() << endl;
                    secondQ.pop();
                }
            }
        }

        cout << endl;
    }

    return 0;
}
