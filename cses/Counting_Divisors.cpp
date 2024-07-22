// File Name: Counting_Divisors.cpp
// Date: 2024-07-18
// Time: 04:22:12

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vll vector<long long int>

const int MAXN = 1e6 + 1;
vll divisors(MAXN, 0);

void precompute_divisors() {
    for (int i = 1; i < MAXN; ++i) {
        for (int j = i; j < MAXN; j += i) {
            divisors[j]++;
        }
    }
}

int main() {
    fastio;
    precompute_divisors();
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }
    
    return 0;
}
