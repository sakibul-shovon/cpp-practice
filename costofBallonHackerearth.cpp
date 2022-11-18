//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        int g,p,N;
        cin>>g>>p;
        cin>>N;
        int arr[N][2];

        for (int i=0;i<N;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }


        int sum1=0;
        int sum2=0;
        for(int j=0;j<N;j++)
        {
            if(arr[j][0]==1){sum1=sum1+p;}
            if(arr[j][1]==1){sum1=sum1+g;}
        }


        for(int j=0;j<N;j++)
        {

               if(arr[j][0]==1) {sum2=sum2+g;}
               if(arr[j][1]==1){sum2=sum2+p;}

        }

        if(sum1>sum2) {cout<<sum2;}
        else {cout<<sum1;}
        cout<<endl;

    }

    return 0;
}
