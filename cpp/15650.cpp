#include <iostream>

int N, M;
int result[8];

void func(int start, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; ++i)
			std::cout << result[i] << ' ';
		std::cout << '\n';
		return;
	}

	for (int i = start; i <= N; ++i) {
		result[depth] = i;
		func(i + 1, depth + 1);
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;

	func(1, 0);

	return 0;
}