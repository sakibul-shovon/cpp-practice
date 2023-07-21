// File Name: A_Next_Round.cpp
// Date: 2023-07-15
// Time: 11:29:40

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int total,place;
    cin>>total>>place;

    int arr[total],temp,countZero = 0;

    for(int i=1;i<=total;i++)
    {
        cin>>arr[i];

        if(i== place)
        {
            temp = arr[i];
        }

        if(arr[i] == 0) countZero++;
    }

    int count = 0;

    if(countZero == total){
        cout<<0<<endl;
    }

    for(int i=1;i<=total;i++)
    {
    
        if(arr[i] == 0)
        {
            count = count + 0;
        }

        else if(arr[i] >= temp)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
