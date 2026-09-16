//week02-3.cpp 學習計畫Basic第1週
//LeetCod1768.Mergr Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length();
        string ans;
        for(int i=0; i<max(N1,N2); i++){
            if(i < N1) ans += word1[i];
            if(i < N2) ans += word2[i];
        }
        return ans;
    }
};
