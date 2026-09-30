///week04good-2.cpp
///2011之後只有在-std=c++11 or -std=gun++11才能用新版迴圈
# include <iostream>
# include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    for(int i=0; i<20; i++){
        cin >> now;
        if(now==0)break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for(int num :a){ ///設定出錯時永遠跑不出來
        if(num == now) ans++;
    }
    cout << ans << "\n";
}
