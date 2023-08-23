#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	t;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		std::deque<int>	deque;
		std::string	command;
		int	n;
		std::string	arr;
		std::cin >> command >> n >> arr;

		std::string	tmp = "";
		if (n != 0)
		{
			for (int j = 0; j < arr.length(); j++)
			{
				if (arr[j] == '[' || arr[j] == ']' || arr[j] == ',')
				{
					if (arr[j] != '[')
						deque.push_back(stoi(tmp));
					tmp = "";
					continue ;
				}
				tmp += arr[j];
			}
		}

		bool	error = false;
		bool	direction = true;
		for (int it = 0; it < command.size(); ++it)
		{
			if (command[it] == 'R')
			{
				direction = !direction;
			}
			else // command[it] == 'D'
			{
				if (deque.size() == 0)
				{
					error = true;
					break ;
				}
				if (direction)
				{
					deque.pop_front();
				}
				else
				{
					deque.pop_back();
				}
			}
		}

		if (error)
			std::cout << "error\n";
		else
		{
			std::cout << "[";
			for (int it = 0; it < deque.size(); ++it)
			{
				if (direction)
					std::cout << deque[it];
				else
					std::cout << deque[deque.size() - it - 1];
				if (it < deque.size() - 1)
					std::cout << ",";
			}
			std::cout << "]\n";
		}
	}

	return 0;
}
