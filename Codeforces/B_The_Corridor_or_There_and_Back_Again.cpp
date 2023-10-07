// File Name: B_The_Corridor_or_There_and_Back_Again.cpp
// Date: 2023-10-07
// Time: 02:11:19

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int n; cin>>n;
        vector<long long int > v;

        
        while(n--){
            
            int room,temp; cin>>room>>temp;//2 8  3 v = 2+3=5  v[5]
            vector<long long int> v2 ;//4 3 v[5]

            //5 2 5
            if(temp % 2 == 0)
            {
                long long int ans = (temp / 2) - 1;
                v.push_back(room+ans);
            }

            else{
                long long int ans = (temp / 2) ;
                v.push_back(room+ans);
            }

           
            
        }
        
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<*min_element(v.begin(), v.end())<<endl;

    }
    return 0;
}
