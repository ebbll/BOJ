#include <iostream>
#include <string>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	std::stack<int>	stack;
	for (int i = 0; i < n; ++i)
	{
		std::string	command;
		std::cin >> command;
		if (command == "push")
		{
			int	x;
			std::cin >> x;
			stack.push(x);
		}
		else if (command == "pop")
		{
			if (stack.size() == 0)
				std::cout << "-1\n";
			else
			{
				std::cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (command == "size")
		{
			std::cout << stack.size() << "\n";
		}
		else if (command == "empty")
		{
			if (stack.size() > 0)
				std::cout << "0\n";
			else
				std::cout << "1\n";
		}
		else // command == "top"
		{
			if (stack.size() == 0)
				std::cout << "-1\n";
			else
				std::cout << stack.top() << "\n";
		}
	}

	return 0;
}
