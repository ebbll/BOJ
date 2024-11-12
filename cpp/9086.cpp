#include <iostream>
#include <string>

int T;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;
	for (int i = 0; i < T; ++i) {
		std::string S;
		std::cin >> S;
		std::cout << S[0] << S[S.length() - 1] << '\n';
	}

	return 0;
}