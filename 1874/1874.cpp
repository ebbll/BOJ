#include <iostream>
#include <stack>
#include <vector>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::stack<int>	stack, res;
	std::vector<int> nums(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> nums[i];
	}
	std::vector<std::string> command;
	int in = 1, idx = 0;
	while (idx < n)
	{
		while (in <= nums[idx])
		{
			stack.push(in++);
			command.push_back("+");
		}
		if (stack.top() != nums[idx])
			break ;
		res.push(stack.top());
		stack.pop();
		command.push_back("-");
		++idx;
	}
	if (stack.empty() == false)
	{
		std::cout << "NO";
		return 0;
	}
	for (int i = 0; i < command.size(); ++i)
	{
		std::cout << command[i] << '\n';
	}

	return 0;
}
