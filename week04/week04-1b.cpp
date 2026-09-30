///week04-1b.cpp SOIT108_Advance_008
///C++ª©¥»
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a(10);
	for(int i=0; i<10; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int i=9; i>=0; i--){
		cout << a[i] << ' ';
	}
}
