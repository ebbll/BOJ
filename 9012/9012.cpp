#include <iostream>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string	input;
		std::cin >> input;
		std::stack<char>	stack;
		bool	valid = true;
		for (std::string::iterator it = input.begin(); it != input.end(); ++it)
		{
			if (*it == '(')
				stack.push(*it);
			else
			{
				if (stack.empty() || stack.top() != '(')
				{
					valid = false;
					break ;
				}
				else
					stack.pop();
			}
		}
		if (stack.empty() == false)
			valid = false;
		if (valid)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}

	return 0;
}
