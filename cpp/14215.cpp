#include <iostream>
#include <cmath>

int A, B, C;
int min, mid, max;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B >> C;
	max = std::max(A, std::max(B, C));
	min = std::min(A, std::min(B, C));
	mid = A + B + C - max - min;

	if (max >= min + mid) max = min + mid - 1;
	std::cout << min + mid + max;

	return 0;
}