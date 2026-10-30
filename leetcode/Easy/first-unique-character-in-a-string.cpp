// Problem: First Unique Character in a String
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/first-unique-character-in-a-string/
// Solved on: 2026-10-30T02:30:16.863Z

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char,int>m;
        queue<int> Q;
        for(int i=0;i<n;i++){
            if(m.find(s[i]) == m.end()){
                Q.push(i);
            }
            m[s[i]] ++;
            while(Q.size()>0 && m[s[Q.front()]]>1){
                Q.pop();
            }
        }
        if(Q.empty()){
            return -1;
        }else{
            return Q.front();
        }
    }
    
};