// File Name: A_String_Task.cpp
// Date: 2023-07-02
// Time: 02:08:19

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s,result = "";
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        char c = tolower(s[i]);

        if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' || c == 'y') continue;

        else{
            result += '.';
            result += c;
        }
    }

    cout<<result<<endl;

    return 0;
}
