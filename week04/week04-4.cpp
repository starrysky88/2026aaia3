//week04-4.cpp 學習計畫 Basic第7題
//LeetCode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        int carry  = 1;
        for(int i=N-1;i>=0;i--){
           int now = digits[i]+carry;
           carry = now / 10;
           digits[i] = now % 10;
        }
        if(carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
