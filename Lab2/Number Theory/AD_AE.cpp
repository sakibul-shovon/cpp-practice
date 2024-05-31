#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long int>
#define MAX 100000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);



const long long M = 1e8;

vector<long long> prime;
bool sieve[M + 1] = {false};

void primeSieve(long long n) {
    sieve[0] = sieve[1] = true;
    prime.push_back(2);
    for (long long i = 4; i <= n; i += 2)
        sieve[i] = true;
    for (long long i = 3; i * i <= n; i += 2)
        if (!sieve[i])
            for (long long j = i * i; j <= n; j += 2 * i)
                sieve[j] = true;
}

int main() {
    fastio;
    primeSieve(M);
    ll count = 1;
    cout<<2<<endl;

    for(ll i=3;i<=M;i++){
        if(!sieve[i]){
            if(count == 0){
                cout<<i<<endl;
            }
            count++;
            count %=100;
        }
    }
    return 0;
}
