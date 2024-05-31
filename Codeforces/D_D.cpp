#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> weights(n);
        vector<int> freq(2 * n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> weights[i];
            freq[weights[i]]++;
        }

        int max_teams = 0;
        for (int s = 2; s <= 2 * n; ++s) {
            int teams = 0;
            for (int i = 1; i <= s / 2; ++i) {
                int j = s - i;
                if (i != j) {
                    teams += min(freq[i], freq[j]);
                } else {
                    teams += freq[i] / 2;
                }
            }
            max_teams = max(max_teams, teams);
        }

        cout << max_teams << endl;
    }

    return 0;
}
