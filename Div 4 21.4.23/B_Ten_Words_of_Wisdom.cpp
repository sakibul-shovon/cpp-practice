// File Name: B_Ten_Words_of_Wisdom.cpp
// Date: 2023-07-21
// Time: 20:48:31

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        vector<int> arr;
        int max = 0;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            arr.push_back(b);

            

            if(a <= 10)
            {
                if(b > max)
                {
                    max = i;
                }
            }

        }

        cout<<max<<endl;

        
        

        
    }
    return 0;
}
