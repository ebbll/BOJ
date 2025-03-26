#include <iostream>

int N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 1; i <= N; ++i) std::cout << "Hello World, Judge " << i << "!\n";

	return 0;
}