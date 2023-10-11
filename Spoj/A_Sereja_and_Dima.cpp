// File Name: A_Sereja_and_Dima.cpp
// Date: 2023-10-09
// Time: 23:17:52

#include <bits/stdc++.h>
using namespace std;
int main()
{

    deque<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sreeja = 0, dima = 0;
    int check = 1; // 1== sreeja
    while (n--)
    {

        if (check == 1)
        {
            if (v.front() > v.back())
            {
                sreeja += v.front();
                v.pop_front();
            }
            else
            {
                sreeja += v.back();
                v.pop_back();
            }

            check = 2;
        }

        else if(check == 2){
            if (v.front() > v.back())
            {
                dima += v.front();
                 v.pop_front();
            }
            else
            {
                dima += v.back();
                v.pop_back();
            }

            check = 1;
        }
    }

    cout<<sreeja<<" "<<dima<<endl;

    return 0;
}
