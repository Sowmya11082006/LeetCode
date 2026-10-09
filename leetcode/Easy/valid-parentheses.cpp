// Problem: Valid Parentheses
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-parentheses/submissions/2166823178/
// Solved on: 2026-10-09T01:16:14.405Z

class Solution {
public:
    bool isValid(string str) {
        stack<char>st;
        for(int i=0;i<str.size();i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                st.push(str[i]);
            }else{
                if(st.size()==0) return false;
                if(st.top() == '(' && str[i]==')'||st.top() == '{' && str[i]=='}'|| st.top() == '[' && str[i]==']'){
                    st.pop();
                }else{
                    return false;
                }

            }
        }
        return  st.size() == 0;
    }
};