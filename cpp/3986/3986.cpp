#include <iostream>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	int	ret = 0;
	for (int i = 0; i < n; ++i)
	{
		std::stack<char>	stack;
		std::string	input;
		std::cin >> input;
		for (std::string::iterator it = input.begin(); it != input.end(); ++it)
		{
			if (stack.empty() || stack.top() != *it)
				stack.push(*it);
			else
				stack.pop();
		}
		if (stack.empty())
		{
			++ret;
		}
	}
	std::cout << ret;

	return 0;
}
