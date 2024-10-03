#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::string S;
	std::cin >> N >> S;

	for (int i = 0; i < 5; ++i) {
		std::cout << S[N + i - 5];
	}

	return 0;
}