// Problem: Next Greater Element II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/next-greater-element-ii/
// Solved on: 2026-10-24T01:41:40.299Z

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int>s;

        for(int i= 2*n-1 ; i>=0; i--){
            while(s.size()>0 && nums[s.top()] <= nums[i%n]){
                s.pop();
            }
            ans[i%n] = s.empty() ? -1 : nums[s.top()];
            s.push(i%n);
        }
        return ans;
    }
};