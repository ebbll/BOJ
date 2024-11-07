#include <iostream>

int N, x, y;
int area;
int visited[102][102];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> x >> y;
		for (int a = x; a < x + 10; ++a) {
			for (int b = y; b < y + 10; ++b) {
				if (!visited[a][b]) {
					visited[a][b] = 1;
					++area;
				}
			}
		}
	}
	std::cout << area;

	return 0;
}