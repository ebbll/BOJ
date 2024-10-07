#include <iostream>

void func(int start, int N, int M, int depth) {
	static int result[8];

	if (depth == M) {
		for (int i = 0; i < M; ++i) {
			std::cout << result[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = start; i <= N; ++i) {
		result[depth] = i;
		func(i + 1, N, M, depth + 1);
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;

	func(1, N, M, 0);

	return 0;
}