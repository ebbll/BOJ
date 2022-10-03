#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::vector<int> fib(n + 1);
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	std::cout << fib[n];

	return 0;
}