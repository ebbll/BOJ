#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, a = 0, b = 0;

	std::cin >> N;
	for (int i = 0; i <= N; ++i) {
		int x = i;
		while (x > 0) {
			if (x % 2 == 0) {
				++a;
				x /= 2;
			}
			else if (x % 5 == 0) {
				++b;
				x /= 5;
			}
			else {
				break;
			}
		}
	}

	std::cout << std::min(a, b) << '\n';

	return 0;
}
