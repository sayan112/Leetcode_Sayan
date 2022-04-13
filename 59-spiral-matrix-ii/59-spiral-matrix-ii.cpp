class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      
        int top = 0 ;
        int down =  n-1  ;
        int left=0 ;
        int right= n-1 ;
        int dir =0;
       vector<vector<int>> matrix(n, vector<int> (n));
        int count=0;
  while(top <= down && left<=right)
  {
     
      
      if(dir==0)
      {
          for(int i=left ; i <=right ; i++)
          {
               count++;
          matrix[top][i]=count;
          }
          top++;
      }
      else if(dir==1)
      {
           for(int i=top ; i <=down ; i++)
          {
                count++;
           matrix[i][right]=count ; 
          } 
          right--;
          
      }
       else if(dir==2)
       {
            for(int i=right ; i >=left ; i--)
          {
                 count++;
          matrix[down][i]= count ;   
          }  
           down--;
       }
      else if(dir==3)
      {
             for(int i=down; i >=top ; i--)
          {
                  count++;
          matrix[i][left]= count ; 
          }  
          
           left++;
      }
      
dir= (dir+1)%4;
      
  }
         return matrix;
        
    }
};