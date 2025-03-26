#include <iostream>

int A, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true) {
		std::cin >> A >> B;
		if (!A && !B) break;
		std::cout << A + B << "\n";
	}

	return 0;
}