#include <iostream>
#include <string>
#include <regex>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;
	std::regex pattern("(100+1+|01)+");

	for (int loop = 0; loop < T; ++loop) {
		std::string input;
		std::cin >> input;
		if (std::regex_match(input, pattern))
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}

	return 0;
}
