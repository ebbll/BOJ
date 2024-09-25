#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b, c, num;
	std::cin >> a >> b >> c;

	std::stringstream ss;
	std::string abtostr = std::to_string(a) + std::to_string(b);
	ss << abtostr;
	ss >> num;
	std::cout << a + b - c << '\n';
	std::cout << num - c << '\n';

	return 0;
}
