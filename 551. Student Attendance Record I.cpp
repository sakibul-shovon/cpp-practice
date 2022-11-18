//https://leetcode.com/problems/student-attendance-record-i/description/
class Solution {
public:
    bool checkRecord(string s) {

        int absent=0 ,late=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            absent=absent+1;

             if(s[i]=='L')
            late=late+1;
            else late=0;
            if(absent>=2 || late>2)
            return false;
        }

        return true;



    }
};
