class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int remain=0;
         int need =0;
        for(auto elem :moves)
        {
            if(elem=='L')
            {
                need++;
            }
            else if(elem=='R'){
                 need--;
            }
            else{
             remain++;   
            }
        }
         // cout << need <<" "<< remain<<endl;
        if(need==0)
        {
             return remain;
        }else if(need>0){
             return need+remain;
            
        }
        else{
             return abs(need-remain);
        }
         return -1;
    
    }
};