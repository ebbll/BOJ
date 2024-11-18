#include <iostream>
#include <string>

std::string str[5];
std::string res;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 5; ++i) std::cin >> str[i];

	for (size_t i = 0; i < 15; ++i)
		for (int loop = 0; loop < 5; ++loop)
			if (i < str[loop].length()) res += str[loop][i];

	std::cout << res;

	return 0;
}