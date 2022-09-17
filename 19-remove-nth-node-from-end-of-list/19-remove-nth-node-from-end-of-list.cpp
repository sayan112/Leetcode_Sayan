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
      
         vector<int>vec;
         while(head)
         {
      
              vec.push_back(head->val);
                    head=head->next;
              
         }
         ListNode* ans= new ListNode();
        ListNode* node=ans;
        for(int i =0; i < vec.size();i++)
        {
            if(i==(vec.size()-n))
            {
                 continue;
            }
            ListNode* helper = new ListNode(vec[i]);
             node->next = helper;
             node= node->next;
        }
         return ans->next;
        
        
    }
};