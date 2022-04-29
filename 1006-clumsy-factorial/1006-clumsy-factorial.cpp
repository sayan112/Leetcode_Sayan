class Solution {
public:
    int clumsy(int n) {
        // Brute force calculation approach:
        if (n == 1 || n == 2) {
            return n;
        }
        
        int c_fact = n * (n-1) / (n-2) + (n-3);
        n -= 4;
        while (n > 3) {
            c_fact = c_fact - n * (n-1) / (n-2) + (n-3);
            n -= 4;
        }
        
        if (n == 1) {
            return c_fact - 1;
        }
        else if (n == 2) {
            return c_fact  - 2;
        }
        else if (n == 3) {
            return c_fact  - 6;
        }
        return c_fact;
        // Runs in O(n) time.
    }
};