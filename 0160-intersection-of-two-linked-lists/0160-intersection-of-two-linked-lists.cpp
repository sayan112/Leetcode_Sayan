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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
  
        ListNode *B=headB;
        while(B)
        {
                  ListNode *A= headA;
            while(A)
            {
                if(A==B)
                {
                    return A;
                }
                A=A->next;
            }
            B=B->next;
        }
         return NULL;
    }
};