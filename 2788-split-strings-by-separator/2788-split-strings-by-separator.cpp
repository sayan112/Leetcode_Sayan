class Solution
{
    public:
        vector<string> splitWordsBySeparator(vector<string> &words, char separator) {
            
              vector<string>ans;
            for(auto elem: words )
            {
                string need;
                 
                   for(int i=0;i<elem.size();i++)
                   {
                      
                       if(elem[i]!=separator)
                       {
                           need+=elem[i];
                            if(i==elem.size()-1)
                        {
                                if(need.size()>0)
                                {
                                      ans.push_back(need);
                                }
                              
                            }
                       }
                       else{

                                if(need.size()>0)
                                {
                                      ans.push_back(need);
                                }
                           need.clear();
                       }
                   }
            }
            return ans;
            
        }
};