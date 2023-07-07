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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
         while(head)
         {
             if(mp.find(head)==mp.end())
             {
                    mp[head]++;
             }
            else{
                return head;
            }
          
             head=head->next;
         }
         return NULL;
        
    }
};