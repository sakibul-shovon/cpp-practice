#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long int t, i, k, n = 0, cnt;
    cin >> n >> k;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<long long int> v(n);
    long long int max_value = 0;

    for (i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max_value) {
            max_value = v[i];
        }
    }

    // Ensure the vector v1 is large enough to handle values up to max_value + k
    vector<long long int> v1(max_value + k + 1, 0);

    for (i = 0; i < n; i++) {
        v1[v[i]]++;
    }

    cnt = 0;
    for (i = 0; i < n; i++) {
        if (v[i] + k < v1.size()) {
            cnt += v1[v[i] + k];
        }
    }

    cout << cnt << "\n";
    return 0;
}
