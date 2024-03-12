#include<bits/stdc++.h>
using namespace std;
 
 
 
bool compare(pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}
 
int main() {
    
    int n;
    cin >> n;
 
    vector<pair<string, int>> v;
    while (n--) {
        string s;
        cin >> s;
        int x;
        cin >> x;
        v.push_back({s, x});
    }
 
    sort(v.begin(), v.end(), compare);
 
    for (auto it : v)
        cout << it.first << " " << it.second << endl;
 
    return 0;
}