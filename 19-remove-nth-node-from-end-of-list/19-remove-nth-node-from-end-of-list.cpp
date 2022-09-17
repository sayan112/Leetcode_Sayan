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
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {

            vector<int> vec; 
            
            // putting all node values into a vector :)
            
            while (head)
            {
                vec.push_back(head->val);
                head = head->next;
            }
            
            
            // now create new node and add values into it without the nth value from end
            ListNode *ans = new ListNode();
            ListNode *node = ans;
            for (int i = 0; i < vec.size(); i++)
            {
                if (i == (vec.size() - n))
                {
                    continue;
                }
                ListNode *helper = new ListNode(vec[i]);
                node->next = helper;
                node = node->next;
            }
            
            // now return just ans->next :)
            
            return ans->next;
        }
};