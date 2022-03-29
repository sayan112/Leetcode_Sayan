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
        
        ListNode *A=headA;
         
        
        while(A)
        {
             ListNode *B=headB;
            
             while(B)
             {
                 if(A==B)
                 {
                      return A;
                 }
                 B=B->next;
                 
             }
             A= A->next;
            
        }
         return A;
        
        
        
        
        
    }
};