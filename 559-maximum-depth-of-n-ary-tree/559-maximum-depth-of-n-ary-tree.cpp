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

// in binary tree we return  1 + max( left_child_depth, right_child_depth)
// here i am doing same
// return 1 + max( child1_depth , child2_depth, child3_depth ........)

class Solution {
public:
    
    int maxDepth(Node* root) {
    
            if(root==NULL)
            {
                 return 0 ; 
            }
         int need=0;
    
      for(int i=0; i<root-> children.size();i++ )
      {
         need= max( need, maxDepth(root-> children[i]));
          
      }
        return need+1;
       
    }
};