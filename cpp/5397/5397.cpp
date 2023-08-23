#include <iostream>
#include <string>
#include <list>

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
		std::list<char>	list;
		std::list<char>::iterator	cursor = list.end();
		for (int j = 0; j < input.size(); ++j)
		{
			if (input[j] == '<')
			{
				if (cursor != list.begin())
					--cursor;
			}
			else if (input[j] == '>')
			{
				if (cursor != list.end())
					++cursor;
			}
			else if (input[j] == '-')
			{
				if (cursor != list.begin())
				{
					--cursor;
					cursor = list.erase(cursor);
				}
			}
			else
			{
				list.insert(cursor, input[j]);
			}
		}
		for (std::list<char>::iterator it = list.begin(); it != list.end(); ++it)
		{
			std::cout << *it;
		}
		std::cout << "\n";
	}

	return 0;
}
