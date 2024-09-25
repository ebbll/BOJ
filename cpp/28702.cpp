#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string s;
	int res;

	for (int i = 0; i < 3; ++i) {
		std::cin >> s;
		if (s != "Fizz" && s != "Buzz" && s != "FizzBuzz") {
			res = std::stoi(s) + (3 - i);
		}
	}

	if (res % 3 != 0 && res % 5 != 0) { std::cout << res; return 0; }
	if (res % 3 == 0) std::cout << "Fizz";
	if (res % 5 == 0) std::cout << "Buzz";
	return 0;
}
