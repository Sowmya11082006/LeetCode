// Problem: Swap Nodes in Pairs
// Platform: leetcode
// Contest: Medium
// Rating/Difficulty: Medium
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/swap-nodes-in-pairs/submissions/2164789264/
// Solved on: 2026-10-07T01:27:14.259Z

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* first = head ; 
        ListNode* sec = head->next;
        ListNode* prev = NULL;
        
        while(first !=NULL && sec != NULL){
            ListNode* third = sec->next;
            sec->next = first;
            first->next = third;

            if(prev != NULL){
                prev->next = sec;
            }else{
                head = sec;
            }

            prev = first;
            first = third;

            if(third != NULL){
                sec = third->next;
            }else{
               sec = NULL; 
            }

        }
        return head;
         
    }
};