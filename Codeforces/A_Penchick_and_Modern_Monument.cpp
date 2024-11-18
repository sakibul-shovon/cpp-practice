#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int operations = 0;
        int target = 1;  // Target height for the current pillar

        for (int i = 0; i < n; ++i) {
            if (h[i] < target) {
                operations += target - h[i];
                h[i] = target;
            }
            target = max(target, h[i] + 1);  // Increase the target for the next pillar
        }

        cout << operations << endl;
    }

    return 0;
}