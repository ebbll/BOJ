#include <iostream>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true)
	{
		bool	valid = true;
		std::stack<char>	stack;
		std::string	input;
		getline(std::cin, input);
		if (input == ".")
			break ;
		for (std::string::iterator it = input.begin(); it != input.end(); ++it)
		{
			if (*it == '(' || *it == '[')
				stack.push(*it);
			else if (*it == ')')
			{
				if (stack.empty() == true || stack.top() != '(')
				{
					valid = false;
					break;
				}
				else
					stack.pop();
			}
			else if (*it == ']')
			{
				if (stack.empty() == true || stack.top() != '[')
				{
					valid = false;
					break;
				}
				else
					stack.pop();
			}
			else
				continue ;
		}
		if (stack.empty() == false)
			valid = false;
		if (valid)
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}

	return 0;
}