//week07-3.cpp 學習計畫 LeetCode 第4題
//LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0;//d是0:北 1:東 2:南 3:西
        for(char c : instructions){
            if(c=='R') d = (d+1)%4;//右轉
            if(c=='L') d = (d-1+4)%4;//左轉
            if(c=='G') {//前進
                if(d==0) y++;//往北
                if(d==1) x++;//往東
                if(d==2) y--;//往南
                if(d==3) x--;//往西
            }
        }
        //1.方向有改一定繞圈 2.回到原來的位置，1次就繞回來
        if(x==0 && y==0)return true;//回原位
        if(d != 0)return true;//方向不一樣，4次後會回來
        return false;
    }
};
