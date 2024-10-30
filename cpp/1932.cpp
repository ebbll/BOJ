#include <iostream>

int N;
int D[502][502];
int tri[502][502];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int row = 1; row <= N; ++row) {
		for (int col = 1; col <= row; ++col) {
			std::cin >> tri[row][col];
		}
	}

	D[1][1] = tri[1][1];
	for (int row = 2; row <= N; ++row) {
		for (int col = 1; col <= row; ++col) {
			if (col == 1) D[row][col] = tri[row][col] + D[row - 1][col];
			else if (col == row) D[row][col] = tri[row][col] + D[row - 1][col - 1];
			else D[row][col] = tri[row][col] + std::max(D[row - 1][col - 1], D[row - 1][col]);
		}
	}

	int max = 0;
	for (int col = 1; col <= N; ++col) if (max < D[N][col]) max = D[N][col];
	std::cout << max;

	return 0;
}