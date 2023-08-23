#include <iostream>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int	point = 0;
		int corr = 0;
		std::string str;
		std::cin >> str;
		for (int idx = 0; idx < str.length(); ++idx)
		{
			if (str[idx] == 'O')
			{
				corr++;
			}
			else
			{
				corr = 0;
			}
			point += corr;
		}
		std::cout << point << '\n';
	}

	return 0;
}
