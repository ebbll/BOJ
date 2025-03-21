#include <iostream>

int in, out;
int sum, max;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 10; ++i) {
		std::cin >> out >> in;
		sum += in - out;
		max = std::max(max, sum);
	}
	std::cout << max;

	return 0;
}