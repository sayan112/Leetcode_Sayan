class Solution
{
    public:
    int minTimeToType(string word)
    {

        int size = word.size();
        int count = 0;
        char need = 'a';
        int ans = 0;

        while (count != size)
        {
          if(word[count]==need)
          {
              ans++;
          }
            else{
                int clockwise=abs(word[count]-need);
                int anticlock=26-clockwise;
                cout<< clockwise<<' '<< anticlock<<endl;
                ans+=min(anticlock,clockwise);
                ans++;
                need=word[count];
            }
            count++;
        }
        return ans;
    }
};