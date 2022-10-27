class Solution {
public:
    int minFlips(string target) {
      char prev='0';
        int count=0;
        for(int i =0;i <target.size();i++)
        {
            if(target[i]!=prev)
            {
                prev=target[i];
                count++;
            }
        }
        return count;
    }
};