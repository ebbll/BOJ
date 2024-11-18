#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	bool flag = true;
	std::string s;
	std::cin >> s;
	for (size_t i = 0; i < s.length() / 2; ++i)
	{
		if (s[i] != s[s.length() - i - 1])
			flag = false;
	}
	std::cout << flag;

	return 0;
}