

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, a, b;
    cin >> n >> a >> b;
    // cout << n - a << endl;
    if (n - a < n - b)
    {
        cout << n - (n - b) + 1 << endl;
    }
    else
    {
        cout << n - a << endl;
    }
    return 0;
}
