// Problem: Next Greater Element II
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/next-greater-element-ii/submissions/2174309215/
// Solved on: 2026-10-17T05:42:33.675Z

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