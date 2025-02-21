#include <iostream>
#include <string>

std::string str;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> str;

	for (size_t i = 0; i < str.length(); ++i)
		if (str[i] >= 65 && str[i] <= 90) str[i] += 32;
		else str[i] -= 32;

	std::cout << str;

	return 0;
}