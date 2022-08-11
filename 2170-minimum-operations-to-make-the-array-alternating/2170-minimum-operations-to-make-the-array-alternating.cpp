class Solution
{
    public:
        int minimumOperations(vector<int> &nums)
        {

            unordered_map<int, int> mp1, mp2;
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0) mp1[nums[i]]++;
                else mp2[nums[i]]++;
            }

           	// 4 max with their frequency
            vector<int> even_max1(2, 0);
            vector<int> odd_max1(2, 0);
            vector<int> even_max2(2, 0);
            vector<int> odd_max2(2, 0);

           	// odd map even map mei se max 2 elements storing 
            for (auto i: mp1)
                if (even_max1[1] <= i.second)
                {
                    even_max1 = { i.first,
                        i.second
                    };
                }
            mp1[even_max1[0]] = 0;
            for (auto i: mp1)
                if (even_max2[1] <= i.second)
                {
                    even_max2[0] = i.first;
                    even_max2[1] = i.second;
                }

            for (auto i: mp2)
                if (odd_max1[1] <= i.second)
                {
                    odd_max1 = { i.first,
                        i.second
                    };
                }
            mp2[odd_max1[0]] = 0;
            for (auto i: mp2)
                if (odd_max2[1] <= i.second)
                {
                    odd_max2[0] = i.first;
                    odd_max2[1] = i.second;
                }

            cout << even_max1[1] << " " << even_max2[1] << endl;
            cout << odd_max1[1] << " " << odd_max2[1] << endl;

            if (even_max1[0] == odd_max1[0]) return n - max(even_max1[1] + odd_max2[1], even_max2[1] + odd_max1[1]);
            return n - even_max1[1] - odd_max1[1];
        }
};