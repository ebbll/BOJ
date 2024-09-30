#include <iostream>

int d[1000];

int dp(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (d[n] > 0) return d[n];
	d[n] = (dp(n - 1) + dp(n - 2)) % 10007;
	return d[n];
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::cout << dp(N);

	return 0;
}