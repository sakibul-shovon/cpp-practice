// File Name: Next_Greater_Element.cpp
// Date: 2024-02-12
// Time: 12:43:30

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n), nge(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
        cin >> v[i];

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
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" "<<nge[i]<<endl;
    }

    return 0;
}
