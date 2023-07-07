/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*temp=head;
     ListNode *slow=head;
        ListNode *fast=head;
         if(head==NULL || head->next==NULL)
         {
             return NULL;
         }
        while(fast && fast->next)
        {
             
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                    while(slow!=temp)
        {
            slow=slow->next;
            
            temp=temp->next;
        }
                   return slow;
            }
        }
    
    
         
         return NULL;
        
    }
};