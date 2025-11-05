// To compute pow(base, exponent) in logn and mod

#include <iostream>

using namespace std;


long long pow_func(long long base, int exponent){
	const long long MOD = 1e9 + 7;
	long long ans = 1;
	base %= MOD;
	while (exponent){
		if (exponent & 1){
			ans = (ans * base) % MOD;
		}
		base = (base * base) % MOD;
		exponent >>= 1;
	}
	return ans;
}

int main(){
	cout << pow_func(212311,2131312);
}
