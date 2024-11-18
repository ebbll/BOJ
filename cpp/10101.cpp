#include <iostream>

int A, B, C, sum;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B >> C;
	sum = A + B + C;
	if (sum != 180) std::cout << "Error";
	else if (A != B && B != C && C != A) std::cout << "Scalene";
	else if (A == B && B == C) std::cout << "Equilateral";
	else std::cout << "Isosceles";

	return 0;
}