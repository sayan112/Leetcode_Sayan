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
    ListNode* middleNode(ListNode* head) {
     ListNode*slowpointer=head;
             ListNode*fastpointer=head;

        while(fastpointer &&fastpointer->next)
        {
            slowpointer=slowpointer->next;
            fastpointer=fastpointer->next->next;
            
        }
         return slowpointer;
    }
};