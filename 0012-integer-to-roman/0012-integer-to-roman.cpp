class Solution {
public:
    string intToRoman(int num) {
        map<int,string> mp{{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
         string ans;
 while(num!=0)
 {
    auto elem=mp.upper_bound(num);
     elem--;
     num-=elem->first;
     ans+=elem->second;
     
 }
         return ans;
    }
};