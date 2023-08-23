#include <iostream>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	k;
	std::cin >> k;
	std::stack<int>	stack;
	for (int i = 0; i < k; ++i)
	{
		int	n;
		std::cin >> n;
		if (n == 0)
		{
			stack.pop();
		}
		else
		{
			stack.push(n);
		}
	}

	int	ret = 0;
	int	loop = stack.size();
	for (int i = 0; i < loop; ++i)
	{
		ret += stack.top();
		stack.pop();
	}
	std::cout << ret << "\n";

	return 0;
}
