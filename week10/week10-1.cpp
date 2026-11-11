//week10-1.cpp SOIT108_ADVANCE_002
#include <iostream>
using namespace std;
int isPrime(int N)
{
	for(int i=2;i<N;i++){
		if(N%i==0)return 0;
	}
	return 1;
}
int main()
{
	int a,b;
	cin >> a >> b;
	int ans=0;
	for(int i=a;i<=b;i++){

		if(isPrime(i)) ans++;
	}
	cout << ans << "\n";
}
