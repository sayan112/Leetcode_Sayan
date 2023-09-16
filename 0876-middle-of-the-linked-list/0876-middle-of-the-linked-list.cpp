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
        ListNode*temp=head;
        int size=0;
       while(temp)
       {
           size++;
           temp=temp->next;
       }
        temp=head;
        int middle=size/2;
         if(size%2==0)
         {
           
              while(middle--)
              {
                  temp=temp->next;
              }
             
         }
        else{
                 while(middle--)
              {
                  temp=temp->next;
              }
        }
         return temp;
    }
};