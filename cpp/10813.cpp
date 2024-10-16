#include <iostream>
#include <vector>

int N, M;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	std::vector<int> basket(N + 1);
	for (int i = 1; i < N + 1; ++i) basket[i] = i;

	int x, y, temp;
	for (int i = 0; i < M; ++i) {
		std::cin >> x >> y;
		temp = basket[x];
		basket[x] = basket[y];
		basket[y] = temp;
	}
	for (int i = 1; i <= N; ++i) {
		std::cout << basket[i] << ' ';
	}

	return 0;
}