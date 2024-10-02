#include <iostream>
#include <vector>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> fact(9, 1);
	for (int i = 1; i <= 8; ++i) fact[i] = fact[i - 1] * i;

	std::string str;
	while (true) {
		std::cin >> str;
		if (str == "0") break ;
		int res = 0;
		for (unsigned int i = 0; i < str.length(); i++) {
			res += (str[i] - '0') * fact[str.length() - i];
		}
		std::cout << res << '\n';
	}

	return 0;
}