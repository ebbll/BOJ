#include <iostream>
#include <string>

std::string A, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B;
	std::cout << (A.length() >= B.length() ? "go" : "no");

	return 0;
}