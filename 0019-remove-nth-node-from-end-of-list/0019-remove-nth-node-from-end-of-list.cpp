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
        
    int size =0;
      
           ListNode*temp=head;
         while(temp)
         {
             temp=temp->next;
             size++;
         }
          
        int count = size-n;
         if(count ==0)
         {
             return head->next;
         }
         cout << count ;
        ListNode *node=head;
         while(count!=1)
         {
             node=node->next;
             count--;
         }
        node->next=node->next->next;
         return head;
    }
};