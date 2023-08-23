#include <iostream>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int i = 0;
	int count = 0;
	while (true)
	{
		if (std::to_string(i).find("666") != std::string::npos)
		{
			count++;
		}
		if (count == n)
		{
			std::cout << i;
			return 0;
		}
		i++;
	}

	return 0;
}
