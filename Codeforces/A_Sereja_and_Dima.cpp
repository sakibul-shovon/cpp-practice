// File Name: A_Sereja_and_Dima.cpp
// Date: 2023-10-08
// Time: 22:17:36

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int Sereja = 0, Dima = 0, check = 1;

    while (!v.empty())
    {
        if (check == 1)
        {
            if (v[0] > v.back())
            {
                Sereja += v[0];
                v.erase(v.begin());
            }
            else
            {
                Sereja += v.back();
                v.pop_back();
            }

            check = 2;
        }

        else
        {
            if (v[0] > v.back())
            {
                Dima += v[0];
                v.erase(v.begin());
            }
            else
            {
                Dima += v.back();
                v.pop_back();
            }

            check = 1;
        }

    }

    cout<<Sereja<<" "<<Dima<<endl;

    return 0;
}
