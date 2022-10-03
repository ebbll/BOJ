#include <iostream>
#include <string>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::stack<char>	stack;
	std::string	input;
	std::cin >> input;
	int ret = 0;
	int term = 1;

	for (int i = 0; i < input.size(); ++i)
	{
		if (input[i] == '(')
		{
			term *= 2;
			stack.push(input[i]);
		}
		else if (input[i] == '[')
		{
			term *= 3;
			stack.push(input[i]);
		}
		else if (input[i] == ')')
		{
			if (stack.empty() || stack.top() != '(')
			{
				std::cout << 0;
				return 0;
			}
			if (input[i - 1] == '(')
				ret += term;
			stack.pop();
			term /= 2;
		}
		else
		{
			if (stack.empty() || stack.top() != '[')
			{
				std::cout << 0;
				return 0;
			}
			if (input[i - 1] == '[')
				ret += term;
			stack.pop();
			term /= 3;
		}
	}
	if (stack.empty())
		std::cout << ret;
	else std::cout << 0;

	return 0;
}
