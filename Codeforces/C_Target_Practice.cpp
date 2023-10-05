// File Name: C_Target_Practice.cpp
// Date: 2023-10-02
// Time: 23:40:08

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        char arr[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>arr[i][j];
            }
        }
        int total = 0;
        int temp = 1;
        int x=0,y=0;
        for(int i=0;i<10;i++){
            
            for(int j=i;j<10-i;j++)
            {
                if( arr[i][j]=='X' || arr[j][9-i] == 'X' || arr[9-i][j]=='X'||arr[j][i] == 'X')
                {
                    total = total + temp;
                    int count = 0;
                    if(arr[i][j] == arr[x][y]){
                        x++;
                        y++;
                        count++;
                    }
                    
                }
            }
            
        }

    cout<<total<<endl;

    }
    return 0;
}
