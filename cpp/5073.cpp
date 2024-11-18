#include <iostream>

int A, B, C;
int max, mid, min;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B >> C;
	while (A && B && C) {
		max = std::max(A, std::max(B, C));
		min = std::min(A, std::min(B, C));
		mid = A + B + C - max - min;
		if (max >= min + mid) std::cout << "Invalid";
		else if (min == mid && mid == max) std::cout << "Equilateral";
		else if (min == mid || mid == max) std::cout << "Isosceles";
		else std::cout << "Scalene";
		std::cout << '\n';
		std::cin >> A >> B >> C;
	}

	return 0;
}