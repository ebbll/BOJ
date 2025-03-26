#include <iostream>
#include <string>

std::string A, B, C, D;
long long sum1, sum2;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B >> C >> D;

	std::cout << std::stoll(A + B) + std::stoll(C + D);

	return 0;
}