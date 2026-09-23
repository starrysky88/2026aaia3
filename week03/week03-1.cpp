//week03-1.cpp 學習計畫 Basic 第8題
//LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size();
        int neg = 0;
        for(int num : nums){
            if(num==0) return 0;
            if(num<0) neg++;
        }
        if(neg % 2 == 0) return 1;
        return -1;
        /*int ans = 1;
        for(int i=0; i<N; i++){
            ans = ans * nums[i];
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;*/
        //壞掉的版本
    }
};
