/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     void traverse (Node* Node, vector<int>&vec )
     {
       for(auto elem : Node-> children)
       {
            traverse (elem, vec );
           
       }
          vec.push_back(Node->val);
         
         
         
     }
    vector<int> postorder(Node* root) {
         vector<int>need;
         if (root== NULL)
         {
              return need;
         }
         else{
             
             traverse(root, need);
             
             return need;
             
         }
        
        
        
    }
};