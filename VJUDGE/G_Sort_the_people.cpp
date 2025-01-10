#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define pb           push_back
#define all(x)       x.begin(), x.end()
#define in(x)        cin >> x;
#define in3(x, y, z) cin >> x >> y >> z;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line         cout << endl;

bool compare(const pair<pair<string, string>, ll> &a, const pair<pair<string, string>, ll> &b) {
    if (a.first.second != b.first.second) return a.first.second < b.first.second;
    if (a.first.first != b.first.first) return a.first.first < b.first.first;
    return a.second > b.second;
}

int main() {
    fastio;
    int n;
    in(n);
    vector<pair<pair<string, string>, ll>> v;

    for (int i = 0; i < n; ++i) {
        string name, surname;
        ll year;
        in3(name, surname, year);
        v.pb({{name, surname}, year});
    }

    sort(all(v), compare);

    for (const auto &person : v) {
        out3(person.first.first, person.first.second, person.second);
        line;
    }

    return 0;
}
