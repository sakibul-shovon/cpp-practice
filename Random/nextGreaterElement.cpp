#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};
    int n = v.size();
    stack<int> st;
    vector<int> nge(n, -1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= v[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            nge[i] = st.top();
        }
        else
        {
            nge[i] = -1;
        }

        st.push(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << ' ';
    }
    return 0;
}

//for cyclic
[1,2,1] ->[-1,-1,-1]

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n = v.size();
        vector<int> nge(n, -1); 
        stack<int> st;
        for (int i = 2 * n - 1; i >= 0; i--) { // Loop through 2 * n - 1 elements
            while (!st.empty() && v[st.top()] <= v[i % n]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i % n] = v[st.top()];
            }
            st.push(i % n);
        }

        return nge;
    }
};
