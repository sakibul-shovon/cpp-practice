#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

int main() {
    fastio;
    ll n, t;
    cin >> n >> t;
    deque<ll> dq(n);
    ll maxx = -1;

    for (ll i = 0; i < n; i++) {
        cin >> dq[i];
        maxx = max(maxx, dq[i]);
    }

    vector<pair<ll, ll>> firstPhase;
    ll count = 0;

    while (dq.front() != maxx) {
        ll a = dq.front();
        dq.pop_front();
        ll b = dq.front();
        dq.pop_front();
        if (a > b) {
            dq.push_front(a);
            dq.push_back(b);
        } else {
            dq.push_front(b);
            dq.push_back(a);
        }
        firstPhase.push_back({a, b});
        count++;
    }
    firstPhase.push_back({dq[0], dq[1]});

    vector<pair<ll, ll>> secondPhase;
    for (ll i = 0; i < n - 1; i++) {
        ll a = dq.front();
        dq.pop_front();
        ll b = dq.front();
        dq.pop_front();
        if (a > b) {
            dq.push_front(a);
            dq.push_back(b);
        } else {
            dq.push_front(b);
            dq.push_back(a);
        }
        secondPhase.push_back({dq[0], dq[1]});
    }

    while (t--) {
        ll x;
        cin >> x;
        if (x <= count + 1) {
            cout << firstPhase[x - 1].first << " " << firstPhase[x - 1].second << endl;
        } else {
            ll index = (x - count - 2) % (n - 1);
            cout << secondPhase[index].first << " " << secondPhase[index].second << endl;
        }
    }

    return 0;
}
