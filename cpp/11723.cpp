#include <iostream>
#include <vector>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<std::pair<int, bool> > set;
	for (int i = 1; i <= 20; ++i)
	{
		set.push_back(std::make_pair(i, false));
	}
	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::string command;
		std::cin >> command;
		int x;
		if (command == "add")
		{
			std::cin >> x;
			set[x - 1].second = true;
		}
		else if (command == "remove")
		{
			std::cin >> x;
			set[x - 1].second = false;
		}
		else if (command == "check")
		{
			std::cin >> x;
			if (set[x - 1].second)
				std::cout << "1\n";
			else
				std::cout << "0\n";
		}
		else if (command == "toggle")
		{
			std::cin >> x;
			set[x - 1].second = !set[x - 1].second;
		}
		else if (command == "all")
		{
			for (int i = 0; i < 20; ++i)
			{
				set[i].second = true;
			}
		}
		else // command == "empty"
		{
			for (int i = 0; i < 20; ++i)
			{
				set[i].second = false;
			}
		}
	}

	return 0;
}