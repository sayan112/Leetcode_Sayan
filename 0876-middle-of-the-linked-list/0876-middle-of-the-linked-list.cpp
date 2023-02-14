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
        
        // complexity -> o(n)+o(n/2)
        
        // int size = 0;
        // ListNode*temp= head;
        //  while(temp)
        //  {
        //      temp= temp->next;
        //       size++;
        //  }
        //  int halfsize=size/2;
        // while(halfsize--)
        // {
        //     head=head->next;
        // }
        //  return head;
        
        ListNode* slowone=head;
            ListNode* fastone=head;
        
        while(fastone->next!=NULL)
        {
            fastone=fastone->next->next;
             if(fastone==NULL)
             {
                  return slowone->next;
             }
            slowone=slowone->next;
        }
         return slowone;
         
    }
};