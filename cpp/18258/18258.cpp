#include <iostream>
#include <queue>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	std::queue<int>	queue;
	for (int i = 0; i < n; ++i)
	{
		std::string	command;
		std::cin >> command;
		if (command == "push")
		{
			int	x;
			std::cin >> x;
			queue.push(x);
		}
		else if (command == "pop")
		{
			if (queue.empty() == true)
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << queue.front() << "\n";
				queue.pop();
			}
		}
		else if (command == "size")
		{
			std::cout << queue.size() << "\n";
		}
		else if (command == "empty")
		{
			std::cout << queue.empty() << "\n";
		}
		else if (command == "front")
		{
			if (queue.empty() == true)
				std::cout << "-1\n";
			else
				std::cout << queue.front() << "\n";
		}
		else // command == "back"
		{
			if (queue.empty() == true)
				std::cout << "-1\n";
			else
				std::cout << queue.back() << "\n";
		}
	}

	return 0;
}
