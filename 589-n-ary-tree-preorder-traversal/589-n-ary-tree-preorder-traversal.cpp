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
    void  traverse ( Node *Node , vector<int>&vec  )
    {
        vec.push_back(Node->val);
         for(auto elem :Node->children)
         {
             traverse ( elem , vec); 
         }
    }
    vector<int> preorder(Node* root) {
         vector<int>vec;
        if(root==NULL)
        {
             return  vec;
        }
        else{
            traverse(root, vec);
            return vec;
        }
        
        
        
    }
};