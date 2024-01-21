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
         ListNode * node= head;
         unordered_map<ListNode *,int>mp;
         while(node)
         {
           if(mp.find(node)==mp.end())
           {
                   mp[node]++;
              
           }
             else{
                  return node;
             }
       
              node=node->next;             
         }
         return node;
    }
};