#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,k,n=0,cnt;
    cin>>n>>k;
    vector<long long int>v(n),v1(100002,0);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        v1[v[i]]++;
    }
    cnt=0;
    for(i=0; i<n; i++)
    {
        cnt+=v1[v[i]+k];
    }
    cout<<cnt<<"\n";
    return 0;
}