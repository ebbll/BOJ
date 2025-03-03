#include <iostream>
#include <string>

int N;
std::string str;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> str;
	for (int i = 0; i < N - 1; i++) {
		std::string temp;
		std::cin >> temp;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] != temp[j]) {
				str[j] = '?';
			}
		}
	}
	std::cout << str;

	return 0;
}