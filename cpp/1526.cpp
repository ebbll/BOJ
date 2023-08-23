#include <iostream>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	while (n > 0)
	{
		bool ret = true;
		std::string str = std::to_string(n);
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] != '4' && str[i] != '7')
			{
				ret = false;
				break;
			}
		}
		if (ret)
		{
			std::cout << n;
			return 0;
		}
		--n;
	}

	return 0;
}
