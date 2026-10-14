// Problem: Next Greater Element I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/next-greater-element-i/
// Solved on: 2026-10-14T01:19:33.954Z

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>a;
        vector<int>ans;
        for(int i=nums2.size()-1;i>=0;i--){
            while(st.size()>0 && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                a[nums2[i]] = -1;
            }else{
                a[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(a[nums1[i]]);
        }
        return ans;

    }
};