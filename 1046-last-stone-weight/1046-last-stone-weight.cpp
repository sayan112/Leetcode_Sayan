class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>max_heap;
            int n = stones.size();
         for(int i=0; i < stones.size();i++)
         {
             max_heap.push(stones[i]);
         }
        
         
    int first, second;
        while(n>1)
        {
            first = max_heap.top();
             max_heap.pop();
            
         second= max_heap.top();
                max_heap.pop();
            n--;
            n--;
             if(first-second>0)
             {
                 int need = first- second;
                 max_heap.push(need);
                n++; 
                 
             }
        
            
        }
        
         if(max_heap.empty())
         {
          return 0;
         }
        else{
     return max_heap.top();
        }
    }
};