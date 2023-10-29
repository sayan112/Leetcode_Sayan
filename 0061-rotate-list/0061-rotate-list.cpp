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
           if(k==0 || head==NULL || head->next==NULL)
        {
            return head;
        }
    
         int size=0;
         ListNode*temp=head;
         while(temp)
         {
             size++;
             temp=temp->next;
         }
     
        // cout << size ;
      if(k>size)
      {
          k=k%size;
      }
        
           if(size==k|| k==0)
        {
            return head;
        }
        int need = size-k;
         // cout << need;
         temp=head;
         while(temp)
         {
           if(need==1)
           {
               
               break;
           }
             need--;
              temp=temp->next;
         }
        
          ListNode*temp2=temp->next;
        cout << temp2->val;
    temp->next=NULL;
         ListNode*ans=temp2;
        
        while(temp2->next)
        {
            temp2=temp2->next;
        }
        temp2->next=head;
        
        
        
         return ans;
  
    }
};