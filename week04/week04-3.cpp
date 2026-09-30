//week04-3.cpp 學習計畫 Basic 896. Monotonic Array
//只會增加減少的陣列
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int red = 0,green =0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) red++;
            if(nums[i] > nums[i+1]) green++;
        }
        if(red==0 || green==0)return true;
        return false;
    }
};
