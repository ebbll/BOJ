#include <iostream>
#include <vector>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<std::pair<long long int, long long int> > P(N + 1);
	
	P[1] = {0, 1};
	for (int i = 2; i <= N; i++) {
		long long int a = P[i - 1].first, b = P[i - 1].second;
		P[i] = {a + b, a};
	}
	std::cout << P[N].first + P[N].second;

	return 0;
}