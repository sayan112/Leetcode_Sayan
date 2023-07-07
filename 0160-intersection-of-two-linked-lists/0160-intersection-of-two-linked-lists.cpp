/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        int length(ListNode *temp) {
             int count =0;
            while(temp)
            {
                temp=temp->next;
                count++;
            }
             return count ;
        }
            ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
            {

                ListNode *A = headA;
                ListNode *B = headB;
               int Alength= length(A);
                   int Blength= length(B);
                 int remain= abs(Alength-Blength);
                if(Alength>Blength)
                {
                    while(remain--)
                    {
                        A=A->next;
                    }
                    
                }
                else{
                    while(remain--)
                    {
                        B=B->next;
                    }
                }
                 while(A && B )
                 {
                      if(A==B)
                      {
                           return A;
                      }
                     A=A->next;
                     B=B->next;
                 }
                 return NULL;
                
            }
        };