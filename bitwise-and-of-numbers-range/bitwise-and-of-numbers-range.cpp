class Solution {
public:
    int msb(int n){
        int x=0;
        while(n){
            x++;
            n/=2;
        }
        return x-1;
    }
   
    int rangeBitwiseAnd(int a, int b) {
       int ans=0;
        while(a && b){
            int msb_a=msb(a);
            int msb_b=msb(b);
            if(msb_a!=msb_b) break;
            ans+=(1<<msb_a);
            a-=(1<<msb_a);
            b-=(1<<msb_b);
        }
        return ans;
    }
};