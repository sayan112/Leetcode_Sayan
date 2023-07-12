/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int findlength(ListNode *temp)
        {
            int count = 0;
            while (temp)
            {
                temp = temp->next;
                count++;
            }
            return count;
        }
    ListNode* rotateRight(ListNode *head, int k)
    {
        ListNode *temp = head;
        int length = findlength(head);
         if(length==0 || k==0)
         {
              return head;
         }
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = head;
        k = (length - (k % length));
        ListNode *temp1 = head;
        while (k!=1)
        {

            temp1 = temp1->next;
            k--;
        }
        head = temp1->next;
        temp1->next = NULL;
        return head;
    }
};