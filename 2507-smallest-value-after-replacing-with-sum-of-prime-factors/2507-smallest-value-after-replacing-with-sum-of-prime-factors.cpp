class Solution {
public:
     vector<int> primefact(int n)
     {
          vector<int>ans;
         while (n % 2 == 0)
    {
       ans.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
             ans.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        ans.push_back(n);  
    }
      return ans;
     }
    int smallestValue(int n) {
        
         while(n)
         {
             vector<int>primefactors=primefact(n);
             
              int sumofprime=0;
             for(auto elem : primefactors)
             {
               sumofprime+=elem;
             }
             
              if(sumofprime==n)
              {
                  return n;
              }
             n=sumofprime;
             
         
         }
         return 0;
        
    }
};