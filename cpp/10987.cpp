#include <iostream>
#include <string>

std::string str;
int count;

bool check(char c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> str;
	for (size_t i = 0; i < str.length(); ++i) {
		if (check(str[i])) ++count;
	}

	std::cout << count;

	return 0;
}