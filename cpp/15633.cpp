#include <iostream>
#include <cmath>

long long N, sum;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	for (int i = 1; i * i <= N; ++i) {
		if (N % i == 0) {
			if (i != N / i) sum += (i + N / i);
			else sum += i;
		}
	}

	std::cout << sum * 5 - 24;

	return 0;
}