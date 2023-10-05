#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int count = 0;
        
        int i = 0;
        
        while(i<n)
        {
            if(arr[i] == 'B')
            {
                i = i+k;
                count = count + 1;
            }
            else{
                i++;
            }
            
            
        }
        
        cout<<count<<endl;


    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;


//         int cnt = 0;

//         for (int i = 0; i < n;)
//         {
//             if (s[i] == 'B')
//             {
//                 cnt++;
//                 i = i + k;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }