#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int minimumDeletedSubarrayLength(vector<int>& A, vector<int>& B) {
    int n = A.size();
    int m = B.size();
    
    int ans = 0;
    int j = 0;
    unordered_map<int, int> index;

    for (int i = 0; i < n; i++) {
        index[A[i]] = i;
    }

    int lastFoundIndex = -1;

    for (int i = 0; i < m; i++) {
        if (index.find(B[i]) != index.end()) {
            if (index[B[i]] < lastFoundIndex) {
                ans++;
            }
            lastFoundIndex = index[B[i]];
        } else {
            ans++;
        }
    }

    return ans;
}

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N;
        cin >> N;

        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        int minDeletedLength = minimumDeletedSubarrayLength(A, B);

        cout << "Case " << tc << ": " << minDeletedLength << endl;
    }

    return 0;
}
