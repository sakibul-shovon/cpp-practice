
Euler's totient function
https://lightoj.com/problem/mathematically-hard

+ prefix sum to count range base co-prime of a number and square it


void calculatePhi() {
    for (int i = 1; i < MAXN; i++) {
        phi[i] = i;
    }

    for (int p = 2; p < MAXN; p++) {
        if (phi[p] == p) {
            for (int k = p; k < MAXN; k += p) {
                phi[k] -= phi[k] / p;
            }
        }
    }

    for(int i = 2; i < MAXN; i++) {
        phi[i] = phi[i] * phi[i];
        phi[i] += phi[i - 1];
    }
}

int main()
{
    fastio;
    calculatePhi();

    ll t; cin >> t;
    ll c = 1;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = phi[b] - phi[a - 1];

        cout << "Case " << c++ << ": " << ans << endl;
    }
    return 0;
}
