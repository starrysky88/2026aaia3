//week06-4.cpp 學習計畫 Simulation
//LeetCode 682. Baseball Game
//5:陣列裡的5
//2:陣列裡的5 2
//c:陣列裡的5(刪掉最後的2)
//D:陣列裡的5 10(把最後的5變2倍塞入)
//+:陣列裡的5 10 15(最後2個個數5+10變15塞入)
//最後把所有答案加起來
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            if(s=="C"){
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if(s=="+"){
                a.push_back(a[a.size()-2] + a[a.size()-1]);
            }else{
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans = 0;
        for(int num : a){
            ans += num;
        }
        return ans;
    }
};
