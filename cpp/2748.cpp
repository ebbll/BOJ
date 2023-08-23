#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	long long fib[100];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; ++i)
		fib[i] = fib[i - 2] + fib[i - 1];
	std::cout << fib[n];

	return 0;
}