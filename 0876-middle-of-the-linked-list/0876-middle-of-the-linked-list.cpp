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
        ListNode *temp=head;
         ListNode *temp2=head;
         int size=0;
         while(temp)
         {
              temp=temp->next;
             size++;
         }
        int halfsize=size/2;
         while(halfsize)
         {
             temp2=temp2->next;
             halfsize--;
         }
        return temp2;
    }
};