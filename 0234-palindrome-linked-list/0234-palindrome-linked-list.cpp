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
    bool isPalindrome(ListNode* head) {
        ListNode*List1=head;
        string need;
        while(List1)
        {
            need+=List1->val+'0';
            List1=List1->next;
        }
         string revneed=need;
        reverse(revneed.begin(),revneed.end());
         if(revneed==need)
         {
              return true;
         }
         return false;
    }
};