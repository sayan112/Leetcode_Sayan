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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*cur =head;
          ListNode*prev =head;
        for(int i=0; i <left-1;i++)
        {
            cur=cur->next;
            prev=prev->next;
        }
         stack<int>st;
        for(int i=0; i <=(right-left);i++)
        {
           st.push(cur->val); 
            cur=cur->next;
            
        }
        for(int i=0; i<=(right-left);i++)
        {
            prev->val=st.top();
            st.pop();
            prev=prev->next;
        }
        return head;
        
         
    }
};