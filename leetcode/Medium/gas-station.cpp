// Problem: Gas Station
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/gas-station/submissions/2195628442/
// Solved on: 2026-11-14T02:10:26.960Z

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0 , totCos = 0;
        

        
        // unique sol exists

        int start = 0 , currGas= 0;
        for(int i =0;i< gas.size();i++){
            totGas += gas[i];
            totCos += cost[i];
            currGas += (gas[i] - cost[i]);

            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }
        if(totGas < totCos){
            return -1;
        }

        return start;
    }
};