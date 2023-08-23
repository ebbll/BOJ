#include <iostream>

int positive[1000001];
int negative[1000001];

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		if (input >= 0)
			++positive[input];
		else
			++negative[input * -1];
	}
	for (int i = 1000000; i > 0; --i)
	{
		for (int j = 0; j < negative[i]; ++j)
		{
			std::cout << i * -1 << '\n';
		}
	}
	for (int i = 0; i <= 1000000; ++i)
	{
		for (int j = 0; j < positive[i]; ++j)
		{
			std::cout << i << '\n';
		}
	}

	return 0;
}