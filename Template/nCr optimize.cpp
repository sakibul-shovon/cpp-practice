#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000006 // Maximum value of a and b (1 <= b <= a <= 10^6)

long long fact[MAX], inv_fact[MAX];

// Function to compute a^b % MOD using binary exponentiation
long long binPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b % 2) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

// Precompute factorials and inverse factorials
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    
    inv_fact[MAX - 1] = binPow(fact[MAX - 1], MOD - 2); // inverse of fact[MAX-1] using Fermat's Little Theorem
    for (int i = MAX - 2; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

// Function to calculate binomial coefficient C(a, b) % MOD
long long binomial(long long a, long long b) {
    if (b < 0 || b > a) return 0;
    return (fact[a] * inv_fact[b] % MOD) * inv_fact[a - b] % MOD;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    precompute(); // Precompute factorials and inverse factorials
    
    int n;
    cin >> n;
    
    while (n--) {
        long long a, b;
        cin >> a >> b;
        
        cout << binomial(a, b) << endl;
    }
    
    return 0;
}
