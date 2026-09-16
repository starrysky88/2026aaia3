//week02-4.cpp 學習計畫Basic第1週
//LeetCode389. Find the Difference
//整理左邊s的字母，再讓右邊t用掉。不夠用時找到答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {}; //大括號表都是0;
        for(char c: s){
            H[c-'a'] += 1;
        }
        for(char c: t){
            H[c-'a'] -= 1;
            if(H[c-'a'] < 0) return c;
        }
        return 0;
    }
};
