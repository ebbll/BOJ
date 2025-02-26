#include <iostream>

long long A, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B;
	std::cout << (A + B) * (A - B);

	return 0;
}