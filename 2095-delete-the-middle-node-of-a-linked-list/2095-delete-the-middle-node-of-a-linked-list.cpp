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
    ListNode* deleteMiddle(ListNode* head) {
        
        
      // rabit and two tortoise story anusaaar :)
        
      ListNode* rabit=head;
       ListNode* fasttortoise=head;
            ListNode* slowone=head;
         if(fasttortoise==NULL || fasttortoise->next==NULL)
         {
              return NULL;
         }
      
         while(fasttortoise!=NULL && fasttortoise->next!=NULL)
         {
              if(rabit!=head)
              {
                   slowone=slowone->next;
              }
              rabit=rabit->next;
           fasttortoise=fasttortoise->next->next;
              
             
         }
        slowone->next=rabit->next;
         return head;
        
    }
};