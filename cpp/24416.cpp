#include <iostream>

int N;
int D[42];
int rec, dp;

int fib(int n) {
	if (n == 1 || n == 2) {
		++rec;
		return 1;
	} else return fib(n - 1) + fib(n - 2);
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	int res = fib(N);

	D[1] = 1;
	D[2] = 1;
	for (int i = 3; i <= N; ++i) {
		D[i] = D[i - 1] + D[i - 2];
		++dp;
	}

	std::cout << rec << ' ' << dp;
	rec += res;

	return 0;
}