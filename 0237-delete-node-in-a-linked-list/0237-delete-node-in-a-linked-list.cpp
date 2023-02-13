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
        void deleteNode(ListNode *node)
        {
          ListNode *need= node;
             need->val=node->next->val;
            need->next=node->next->next;
        }
};