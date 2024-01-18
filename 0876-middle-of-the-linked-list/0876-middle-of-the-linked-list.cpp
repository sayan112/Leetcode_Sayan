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
    ListNode* middleNode(ListNode* head) {
        int size =0;
         ListNode*node= head;
         while(node)
         {
              size++;
             node=node->next;
         }
     int mid = size/2;
         node=head;
         while(mid)
         {
              mid--;
              node=node->next;
             
         }
         return node;
    }
};