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
         ListNode* emptynode =NULL;
      int size =0;
         ListNode*node=head;
         while(node)
         {
             size++;
              node=node->next;
         }

            node=head;
          int need= size-n;
         if(need<=0)
         {
              return head->next;
         }
         while(need!=1)
         {
             node=node->next;
              need--;
         }
       node->next=node->next->next;
             
         return head;
         
    }
};