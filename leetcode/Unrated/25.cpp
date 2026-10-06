// Problem: Reverse Node in k-group
// Platform: leetcode
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/2163681613/
// Solved on: 2026-10-06T01:24:08.925Z

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;
        //check if k nodes exists
        while(cnt<k){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            cnt++;
        }
        //reccursively call for rest of the linked list
        ListNode* prevNode = reverseKGroup(temp,  k);

        // reverse current node
        temp = head ; cnt = 0;
        while(cnt<k){
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }
        return prevNode;
    }
};