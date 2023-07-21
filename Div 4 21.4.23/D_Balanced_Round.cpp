#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n, k;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        int check = true;
        int count = 0;

        while (check)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i + 1] - arr[i] > k)
                {
                    arr.erase(arr.begin() + i);
                    count++;
                }
                else
                {
                    check = false;
                    break;
                }
            }

           

            
        }

        for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
    }

    return 0;
}
