// Problem: Palindrome Number
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-09-16T09:06:48.420Z

class Solution {
public:
    int reverse(int x) {
        int rev=0,digit;
        while(x!=0){
           digit = x%10;
           if(rev>INT_MAX/10 || rev<INT_MIN/10 ){
            return 0;
           }
           rev = (rev*10)+digit;
           x= x/10; 
        }
        return rev;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        int revNum = reverse(x);
        return revNum == x;
    }
};