#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int a = 1;
   for (int i = 0; i < n; i++)
   {
      char c = s[i];
      
   }
   

    int isPangram = 0;

    for (int i = 0; i <26 ; i++)
    {
        if (a=1)
        {
            isPangram = 1;
            break;
        }
    }

    if (isPangram)
    {
       cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
   return 0;
}