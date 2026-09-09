//week01-2.cpp
#include <iostream> ///C++輸入輸出

int main()
{
	int N;
	std::cin >> N; ///C++輸入資料 標準::輸入 送到右邊的N
	int b = N, ans = 0;
	while(N>0){
		ans = ans*10 + N%10;
		N = N / 10;
	}
	///C++輸入資料，將右邊的整數依序送到左邊送出
	///std::cout << b << ans << b+ans; //錯的
	///std::cout << b << "+" << ans << "=" << b+ans << std::end1; std::endl後面是L，整個表跳行
	///std::cout << b << "+" << ans << "=" << b+ans << "\n";
	printf("%d+%d=%d\n", b, ans, ans+b);
}
