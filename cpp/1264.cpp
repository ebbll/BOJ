#include <iostream>
#include <string>

std::string str;

bool check(char s) {
	if (s == 'a' || s == 'A' || s == 'e' || s == 'E' ||
	s == 'i' || s == 'I' || s == 'o' || s == 'O' ||
	s == 'u' || s == 'U') return true;
	return false;
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true) {
		int count = 0;
		std::getline(std::cin, str);
		if (str == "#") break;
		for (size_t i = 0; i < str.length(); ++i)
			if (check(str[i])) ++count;
		std::cout << count << "\n";
	}

	return 0;
}