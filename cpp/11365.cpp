#include <iostream>
#include <string>

std::string str;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true) {
		std::getline(std::cin, str);
		if (str == "END") break;
		for (size_t i = 0; i < str.length(); ++i) {
			std::cout << str[str.length() - i - 1];
		}
		std::cout << "\n";
	}

	return 0;
}