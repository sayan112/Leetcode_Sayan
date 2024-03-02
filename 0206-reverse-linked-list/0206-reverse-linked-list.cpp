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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp=head;
       vector<int>vec;
         while(temp)
         {
             vec.push_back(temp->val);
              temp=temp->next;
             
         }
         
         reverse(vec.begin(),vec.end());
        temp= head;
   for(auto elem : vec)
   {
        temp->val=elem;
        temp=temp->next;
   }
         return head;
        
    }
};