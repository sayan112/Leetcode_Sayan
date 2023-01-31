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
    ListNode* insertionSortList(ListNode* head) {
         ListNode*dummy = new ListNode(1000); 
    
         while(head)
         {
             ListNode* next = head->next; 
             ListNode*temp=dummy;
             while(temp->next && temp->next->val < head->val)
             {
                  temp=temp->next;
             }
             
             // have to understand with dry run 
             head->next=temp->next;
             temp->next= head;
             head=next;
             
         }
         return dummy->next;
    }
};