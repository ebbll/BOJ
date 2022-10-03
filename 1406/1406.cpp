#include <iostream>
#include <string>
#include <list>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string	str;
	std::cin >> str;
	std::list<char>	list(str.begin(), str.end());
	std::list<char>::iterator	cursor = list.end();
	int	m;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		char	command;
		std::cin >> command;
		if (command == 'L')
		{
			if (cursor != list.begin())
				--cursor;
		}
		else if (command == 'D')
		{
			if (cursor != list.end())
				++cursor;
		}
		else if (command == 'B')
		{
			if (cursor !=list.begin())
			{
				--cursor;
				cursor = list.erase(cursor);
			}
		}
		else // command == "P"
		{
			char	input;
			std::cin >> input;
			list.insert(cursor, input);
		}
	}
	for (std::list<char>::iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it;
	}
	std::cout << "\n";

	return 0;
}
