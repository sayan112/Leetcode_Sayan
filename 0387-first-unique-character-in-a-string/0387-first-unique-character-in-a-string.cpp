class Solution
{
    public:
        int firstUniqChar(string s)
        {
            unordered_map<char, int> mp;

            for (auto elem: s)
            {
                mp[elem]++;
            }
            vector<char> vec;
            for (auto elem: mp)
            {
                if (elem.second == 1)
                {
                    vec.push_back(elem.first);
                }
            }
             if(vec.size()==0)
             {
                  return -1;
             }
             for(auto elem : vec)
             {
                  cout << elem <<  " ";
             }
          
            vector<int> num;
            for (auto elem: vec)
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == elem)
                    {
                        num.push_back(i);
                    }
                }
            }
 
            sort(num.begin(), num.end());
            return num[0];
        }
};