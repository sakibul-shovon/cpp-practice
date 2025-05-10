#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;

        vector<int> ops;
        bool possible = true;

        for (int i = 0; i < N - 1; ++i) {
            if (S[i + 1] != T[i + 1]) {
                if (S[i] == '1') {
                    // Perform operation at i+1 (1-based index)
                    S[i + 1] = (S[i + 1] == '1') ? '0' : '1';
                    ops.push_back(i + 1);
                } else {
                    possible = false;
                    break;
                }
            }
        }

        if (!possible || S != T) {
            cout << -1 << '\n';
        } else {
            cout << ops.size() << '\n';
            for (int idx : ops)
                cout << idx << ' ';
            if (!ops.empty()) cout << '\n';
        }
    }

    return 0;
}
