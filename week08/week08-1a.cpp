//week08-1a.cpp 學習計畫 Matrix 第一題 最有錢的
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //最有錢的人有多少錢
        for(vector<int> a : accounts){ //大資料結構(矩陣)，取出中資料結構(陣列)
            int now = 0;
            for(int num : a){ //中資料結構(陣列)取出小資料結構(int)
                now += num;
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
