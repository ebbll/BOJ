#include <iostream>
#include <stack>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::stack<int> stack;

	int N, K;
	std::cin >> N >> K;
	for (int i = 0; i < N; ++i)
	{
		int value;
		std::cin >> value;
		if (value <= K)
		{
			stack.push(value);
		}
	}

	int res = 0;
	while (true)
	{
		if (K == 0)
			break;
		if (stack.top() <= K)
		{
			int curr = stack.top();
			int coins = K / curr;
			res += coins;
			K -= coins * curr;
		}
		else
			stack.pop();
	}
	std::cout << res;

	return 0;
}