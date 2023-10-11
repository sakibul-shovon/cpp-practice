// File Name: A_Array.cpp
// Date: 2023-10-11
// Time: 00:07:28

#include <bits/stdc++.h>
using namespace std;



int main(){
     int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<endl;
    // }
   

    vector<int> pos,neg,zero;
    

    for(int i=0;i<a.size();i++){
        if(a[i] == 0){
            zero.push_back(a[i]);
        }

        else if(a[i] > 0){
            pos.push_back(a[i]);
        } 

        else{
            neg.push_back(a[i]);
        }

    }

    



    if(pos.empty()){
        pos.push_back(neg.back());
        neg.pop_back();

        pos.push_back(neg.back());
        neg.pop_back();
    }

    

    cout << neg.size() << " ";
    for (int x : neg)
        cout << x << " ";
    cout << "\n";

    cout << pos.size() << " ";
    for (int x : pos)
        cout << x << " ";
    cout << "\n";

    cout << zero.size() << " ";
    for (int x : zero)
        cout << x << " ";
    cout << "\n";

    

    // print_me(neg);
    // print_me(pos);
    // print_me(zero);

    return 0;
}
