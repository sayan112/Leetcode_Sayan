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
        if(head==NULL || head->next==NULL || k==0)
        {
             return head;
        }
        ListNode * temp= head;
        int l=0;
         while(temp)
         {
             temp=temp->next;
             l++;
         }
         int rotate= k%l;
        
         for(int i=0; i<rotate;i++)
         {
             temp= head;
             while(temp->next->next!=NULL)
             {
                 temp=temp->next;
                 
             }
             cout << temp->next->val;
             temp->next->next= head;
             head=temp->next;
             temp->next=NULL;
             
             
             
             
         }
        
        return head;
        
        
        
    }
};