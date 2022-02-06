class Solution
{
public:
   long long smallestNumber(long long num)
   {
      if (num == 0)
      {
         return 0;
      }
      if (num > 0)
      {

         vector<int> need;

         while (num)
         {
            int i = num % 10;
            need.push_back(i);
            num = num / 10;
         }
         sort(need.begin(), need.end());
         string m;
         if (need[0] != 0)
         {
            for (auto elem : need)
            {
               m += elem + '0';
            }

            long long real = stoll(m);

            return real;
         }
         else
         {

            int zero = -1;

            for (int i = 0; i < need.size(); i++)
            {
               if (need[i] == 0)
               {
                  zero = i;
               }
               else
               {
                  break;
               }
            }
            m += need[zero + 1] + '0';

            for (int i = 0; i <= zero; i++)
            {
               m += need[i] + '0';
            }
            for (int i = zero + 2; i < need.size(); i++)
            {
               m += need[i] + '0';
            }

            long long real = stoll(m);

            return real;
         }
      }
      else
      {
         long long minus = num * -1;

         vector<int> need;

         while (minus)
         {
            int i = minus % 10;
            // cout << i ;
            need.push_back(i);
            minus = minus / 10;
         }
         sort(need.begin(), need.end(), greater<int>());

         string m;

         for (auto elem : need)
         {
            m += elem + '0';
         }

         long long real = stoll(m);

         return real * -1;
      }
   }
};