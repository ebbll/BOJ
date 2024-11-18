#include <iostream>
#include <vector>

int N;
size_t K;
std::vector<int> d;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		if (N % i == 0) d.push_back(i);
	}
	if (d.size() < K) std::cout << 0;
	else std::cout << d[K - 1];

	return 0;
}