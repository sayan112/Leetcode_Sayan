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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL|| head->next==NULL || k==0)
         {
              return head;
         }
        
         int size=1;
     ListNode* temp=head;
         while(temp->next)
         {
             size++;
              temp=temp->next;
         }
        k=k%size;
        temp->next=head;
         int tempsize=size-k;
         while(tempsize!=0)
         {
             temp=temp->next;
              tempsize--;
         }
         head=temp->next;
      temp->next=NULL;
         return head;
    
    }
};