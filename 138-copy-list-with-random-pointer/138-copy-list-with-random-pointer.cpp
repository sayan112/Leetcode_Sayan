class Solution {
// Iterative sol'n with O(N) time, O(1) space without a hash map
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
                
        // temporary (copied) head node
        Node* tmp_node = head;
		
        while(tmp_node)
        {
            // Cloned node with same val as head
            Node* tmp_copy_node = new Node(tmp_node->val);
            
            // Insert the cloned node next to the original node
            // If A->B->C is the original linked list,
            // Linked list after weaving cloned nodes would be
            // A->A'->B->B'->C->C'
            tmp_copy_node->next = tmp_node->next;
            tmp_node->next = tmp_copy_node;
            tmp_node = tmp_copy_node->next;
        }
            
        tmp_node = head;
        
        // Link random pointers of the newly created nodes
        // and iterate through the newly created list and
        // use original node's random pointers
            
        while (tmp_node)
        {
            tmp_node->next->random = (tmp_node->random) ? tmp_node->random->next : nullptr;
            tmp_node = tmp_node->next->next;
        }
        
        // Unweave the current linked list to get back the 
        // original linked list and the cloned one.
        
		// A->B->C
        Node* tmp_node_old_list = head;
		
		// A'->B'->C'
        Node* tmp_node_new_list = head->next;
        
		Node* old_head = head->next;
        
        while(tmp_node_old_list)
        {
            tmp_node_old_list->next = tmp_node_old_list->next->next;
            tmp_node_new_list->next = (tmp_node_new_list->next) ? tmp_node_new_list->next->next : nullptr;
            
            tmp_node_old_list = tmp_node_old_list->next;
            tmp_node_new_list = tmp_node_new_list->next;
        }
        return old_head;
    }
};