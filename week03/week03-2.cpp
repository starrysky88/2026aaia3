//week03-2.cpp 學習計畫 Basic 第6題
//LeetCode 283. Move Zeroes
//把0移到右邊去，等於「不是0的放左邊」再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int num : nums){
            if(num != 0){
                nums[k] = num;
                k++;
            }
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
