#include <iostream>
#include <string>

int A, B, flag;
std::string res[4];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	res[0] = "factor"; res[1] = "multiple"; res[2] = "neither";

	std::cin >> A >> B;
	while (A * B) {
		if (B % A == 0) flag = 0;
		else if (A % B == 0) flag = 1;
		else flag = 2;
		std::cout << res[flag] << '\n'; 
		std::cin >> A >> B;
	}

	return 0;
}