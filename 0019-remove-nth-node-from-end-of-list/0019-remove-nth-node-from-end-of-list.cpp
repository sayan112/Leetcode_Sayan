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
      ListNode* fastpointer=head;
        ListNode *slowpointer=head;
         int count =n;
        while(count--)
        {
            fastpointer=fastpointer->next;
             if(fastpointer==NULL)
             {
                  return head->next;
             }
        }
        while(fastpointer->next!=NULL)
        {
              fastpointer=fastpointer->next;
              slowpointer=slowpointer->next;
        }
        slowpointer->next=slowpointer->next->next;
        return head;
    }
};