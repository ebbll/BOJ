#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string s;
	int i;
	std::cin >> s >> i;
	std::cout << s[i - 1] << '\n';

	return 0;
}
