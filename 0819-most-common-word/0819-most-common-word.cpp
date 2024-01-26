class Solution
{
    public:
        string mostCommonWord(string para, vector<string> &banned)
        {

            vector<string>vec;
            string temp = "";
            for (auto elem: para)
            {
                if (isalpha(elem))
                {

                    if (isupper(elem))
                    {
                        elem = elem + 32;
                    }
                    if (temp != " ")
                    {

                        temp += elem;
                    }
                }
                else
                {
                    if (temp != " ")
                    {
                         if(temp.size()>=1)
                         {
                                     vec.push_back(temp);
                         }
                
                    }

                    temp = "";
                }
            }
            if (temp.size())
            {

                vec.push_back(temp);
            }
            map<string, int> mp;
            cout<< vec.size()<<endl;
            for (auto elem: vec)
            {
                 
                 cout << elem <<"*"<<endl;
                if (elem != " ")
                {
                    mp[elem]++;
                }
            }

            for (auto elem: banned)
            {
                if (mp.find(elem) != mp.end())
                {
                    mp.erase(elem);
                }
            }
            int maxi = 0;
            for (auto elem: mp)
            {
               	// cout << elem.first<<" "<< elem.second;
                maxi = max(maxi, elem.second);
            }
            for (auto elem: mp)
            {
                if (maxi == elem.second)
                {
                    return elem.first;
                }
            }
            return "";
        }
};