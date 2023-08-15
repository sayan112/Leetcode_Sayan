class Solution {
public:
    string addStrings(string &nums1, string &nums2) {
        reverse(nums1.begin(),nums1.end());
         int sizenum1=nums1.size()-1;
         int sizenum2=nums2.size()-1;
         int carry=0;
         string need ;
        //3 2 1 // size->3
        //1 1 // size->2
         int itr1=0;
         int itr2=0;
        
        while((itr1<=sizenum1)||(itr2<=sizenum2)||carry)
        {
            
             int sum =0;
             if(itr1<=sizenum1)
             {
                 sum+=nums1[itr1]-'0';
                 itr1++;
             }
                if(itr2<=sizenum2)
             {
                 sum+=nums2[itr2]-'0';
                 itr2++;
             }
            if(carry)
            {
                sum+=carry;
            }
             
            need+=(sum%10)+'0';
                carry=sum/10;
        }
        reverse(need.begin(),need.end());
         return need ;
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int>ans;
        string num1;
        for(auto elem : num)
        {
            num1+=elem+'0';
        }
         string num2;
        while(k)
        {
            num2+=(k%10)+'0';
            k=k/10;
        }
        
        
     string strans= addStrings(num1,num2);
         for(auto elem: strans)
         {
             ans.push_back(elem-'0');
            
         }
         return ans;
    }
};