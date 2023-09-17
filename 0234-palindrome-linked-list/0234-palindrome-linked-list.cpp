/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* middleOfLinkedList(ListNode *temp)
        {
            ListNode *temp1 = temp;
            int size = 0;
            while (temp)
            {
                size++;
                temp = temp->next;
            }
            int middle = size / 2;
            while (middle--)
            {
                temp1 = temp1->next;
            }
            if (size % 2 == 1)
            {
                return temp1->next;
            }
            return temp1;
        }
    ListNode* reverse(ListNode *head)
    {

        ListNode *newhead = NULL;
        while (head)
        {
            ListNode *next = head->next;
            head->next = newhead;
            newhead = head;
            head = next;
        }
        return newhead;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *middle = middleOfLinkedList(temp);
        temp = head;
        ListNode *reversenode = reverse(middle);

        while (reversenode)
        {
            if (reversenode->val != temp->val)
            {

                return false;
            }
            else
            {
                reversenode = reversenode->next;
                temp = temp->next;
            }
        }
        return true;
    }
};