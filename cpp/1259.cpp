#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string str;
	while (true)
	{
		bool res = true;
		std::cin >> str;
		if (str == "0")
			break;
		for (int i = 0; i < str.length() / 2; ++i)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				res = false;
			}
		}
		if (res)
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}

	return 0;
}