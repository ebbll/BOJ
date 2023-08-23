#include <iostream>
#include <string>
#include <deque>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	std::deque<int>	deque;
	for (int i = 0; i < n; ++i)
	{
		std::string	command;
		std::cin >> command;
		if (command == "push_front")
		{
			int	x;
			std::cin >> x;
			deque.push_front(x);
		}
		else if (command == "push_back")
		{
			int	x;
			std::cin >> x;
			deque.push_back(x);
		}
		else if (command == "pop_front")
		{
			if (deque.empty() == true)
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << deque.front() << "\n";
				deque.pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (deque.empty() == true)
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << deque.back() << "\n";
				deque.pop_back();
			}
		}
		else if (command == "size")
		{
			std::cout << deque.size() << "\n";
		}
		else if (command == "empty")
		{
			std::cout << deque.empty() << "\n";
		}
		else if (command == "front")
		{
			if (deque.empty() == true)
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << deque.front() << "\n";
			}
		}
		else // command == "back"
		{
			if (deque.empty() == true)
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << deque.back() << "\n";
			}
		}
	}

	return 0;
}
