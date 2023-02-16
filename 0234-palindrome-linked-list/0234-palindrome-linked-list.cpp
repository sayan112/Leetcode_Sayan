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
    bool isPalindrome(ListNode* head) {
         vector<int>vec;
        while(head)
        {
             vec.push_back(head->val);
            head=head->next;

        }
        
         vector<int>need = vec;
         reverse(vec.begin(),vec.end());
         for(int i=0;i<vec.size();i++)
         {
             if(vec[i]!=need[i])
             {
                  return false;
             }
         }
         return true;
    }
};