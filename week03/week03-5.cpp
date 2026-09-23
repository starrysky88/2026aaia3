///week03-5.cpp 想要真的認識 vector<int> a伸縮自如的陣列
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;///宣告「伸縮自如」的陣列
    a.push_back(99);///塞入99
    a.push_back(88);///塞入88
    a.push_back(77);
    for(int i=0;i<a.size();i++)cout << a[i] << " ";
    cout << "\n";

    a.push_back(88);///塞入88
    a.push_back(77);
    for(int i=0;i<a.size();i++)cout << a[i] << " ";
    cout << "\n";
}
