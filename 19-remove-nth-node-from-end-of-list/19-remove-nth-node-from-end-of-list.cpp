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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*slow=head;
          ListNode*fast=head;
for(int i =0; i <n+1 ; i++)
{
    if(!fast)
    {
         return head->next;
    }
     fast=fast->next;
    
}
        
        while(fast)
        {
             slow=slow->next;
            fast=fast->next;
        }
         cout << slow->val<<endl;
        
        slow->next=slow->next->next;
         return head;
        
    }
};