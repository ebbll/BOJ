#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string str;
	while (true)
	{
		std::getline(std::cin, str);
		if (str == "")
			break ;
		std::cout << str << '\n';
	}

	return 0;
}