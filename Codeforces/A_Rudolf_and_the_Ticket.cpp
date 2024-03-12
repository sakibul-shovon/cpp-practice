#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(a);
        vector<int> v2(b);

        for (int i = 0; i < a; i++)
            cin >> v[i];
        for (int i = 0; i < b; i++)
            cin >> v2[i];

        int count = 0;

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (v[i] + v2[j] <= c) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
