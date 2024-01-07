// File Name: Next_Greater_Element.cpp
// Date: 2023-12-09
// Time: 00:30:09

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    stack<int>st;
    vector<int> nge(v.size());

    for(int i=0;i<v.size();i++){

        while(!st.empty() and v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }

        st.push(i);

    }

    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}


int main(){
    
    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> nge = NGE(v);

    for(int i=0;i<n;i++){
        
           if(nge[i] == -1 ){
            cout<<v[i]<<" "<<-1<<endl;
           }else{
            cout<<v[i]<<" "<<v[nge[i]]<<endl;
           }
        
    }

    return 0;
}
