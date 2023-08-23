#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int blank = N - 1 - i; blank > 0; --blank)
		{
			std::cout << ' ';
		}
		for (int star = 0; star <= i; ++star)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
	for (int i = 0; i < N; ++i)
	{
		for (int blank = 0; blank <= i; ++blank)
		{
			std::cout << ' ';
		}
		for (int star = N - 1 - i; star > 0; --star)
		{
			std::cout << '*';
		}
	}

	return 0;
}