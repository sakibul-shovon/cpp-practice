#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; 
    cin >> s;

    vector<int> start(s.size(), -1);  // Initialize with -1
    vector<int> extend(s.size(), -1); // Initialize with -1
    vector<int> freq(s.size() + 1, 0); // Initialize with 0, length up to s.size()
    
    stack<int> st;
    int mx = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (st.empty()) {
                start[i] = extend[i] = -1;
            } else {
                int t = st.top();
                st.pop();
                start[i] = extend[i] = t;

                if (t > 0 && s[t-1] == ')' && start[t-1] != -1) {
                    extend[i] = extend[t-1];
                }

                int length = i - extend[i] + 1;
                freq[length]++;
                mx = max(mx, length);
            }
        }
    }

    if (mx == 0) {
        cout << "0 1\n";  
    } else {
        cout << mx << " " << freq[mx] << endl;
    }

    return 0;
}
