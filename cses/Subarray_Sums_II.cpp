// File Name: Subarray_Sums_II.cpp
// Date: 2024-08-06
// Time: 01:54:50

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vll          vector<long long int>
#define in2(x, y)    cin >> x >> y;
#define WhileVecInput(v,n)   while(n--){ ll temp;cin>>temp; v.push_back(temp); }

int main()
{
    fastio;
    ll n, k;
    in2(n, k);
    vll v(n);
    
    map<ll, int> mp;
    mp[0] = 1; 

    ll prefix = 0, count = 0;

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        prefix += v[i];
        ll remove = prefix - k;
        count += mp[remove];
        mp[prefix]++;
    }

    cout << count << endl;
    return 0;
}
