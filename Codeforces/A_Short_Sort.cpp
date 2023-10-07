// File Name: A_Short_Sort.cpp
// Date: 2023-10-06
// Time: 01:14:26

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s, temp;
        cin >> s;
        temp = s;

        if (s == "abc")
        {
            cout << "YES" << endl;

            continue;
        }

        int check = 0;
        for (int i = 0; i < 2; i++)
        {

            for (int j = i + 1; j <= 2; j++)
            {
                swap(s[i], s[j]);
                if (s == "abc")
                {
                    cout << "YES" << endl;
                    check = 1;
                    break;
                }

                s = temp;
            }
            if (check == 1)
                break;
        }

        if (check == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
