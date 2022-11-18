// File Name: Experiments.cpp
// Date: 2022-11-03
// Time: 20:22:18
//https://www.beecrowd.com.br/judge/en/problems/view/1094
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
    
    int T;
    cin>>T;
    int total=0,sumC=0,sumR=0,sumS=0;

    for(int i=0;i<T;i++)
    {
        int x;
        char c;
        cin>>x>>c;
        total=total+x;

        if(c=='C'){
            sumC=sumC+x;
        }

        else if(c=='R'){
            sumR=sumR+x;
        }
        else if(c=='S'){
            sumS=sumS+x;
        }
       }
    
    
    cout<<"Total: " <<total<< " cobaias"<<endl;
    cout<<"Total de coelhos: "<<sumC<<endl;
    cout<<"Total de ratos: "<<sumR<<endl;
    cout<<"Total de sapos: "<<sumS<<endl;
    
    printf("Percentual de coelhos: %.2f %%\n", ((float)sumC/(float)total)*100.00);
   printf("Percentual de ratos: %.2f %%\n", ((float)sumR/(float)total)*100.00);
   printf("Percentual de sapos: %.2f %%\n", ((float)sumS/(float)total)*100.00);
   

    

    return 0;
}
