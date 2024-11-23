#include <iostream>
#include <set>
#include <string>

std::string str;
std::set<std::string> set;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> str;
	size_t len = str.length();
	for (size_t i = 0; i < len; ++i) {
		for (size_t j = i + 1; j < len + 1; ++j) {
			std::string c = str.substr(i, j - i);
			set.insert(c);
		}
	}
	std::cout << set.size();

	return 0;
}