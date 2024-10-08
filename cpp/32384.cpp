#include <iostream>
#include <string>

std::string S = "LoveisKoreaUniversity";

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	while (N--) {
		std::cout << S << ' ';
	}

	return 0;
}