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
//      int findsize(ListNode* head)
//      {
//           ListNode* list = head;
//           int count =0;
//           while(list)
//           {
//                list = list->next;
//                count++;
               
//           }
//           return count ; 
//      }
    ListNode* middleNode(ListNode* head) {
      
//         int size = findsize(head);
//          int middle = size/2;
//           ListNode* list= head;
//         int count =0;
//          while(count!=middle)
//          {
//              list= list->next;
//              count++;
             
//          }
//          return list ;
               ListNode* slowpointer = head;
                  ListNode* fastpointer =head;
        
         while(fastpointer!=NULL)
         {
           
              if(fastpointer->next==NULL)
              {
                   return slowpointer;
              }
               slowpointer= slowpointer->next;
             fastpointer= fastpointer->next->next;
              
             
         }
         return slowpointer;
        
         
        
         
        
        
    }
};