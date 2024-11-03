#include <iostream>

int N;
int D[12];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	D[1] = 0;
	for (int i = 2; i <= N; ++i) {
		int max = 0;
		for (int a = 1; a <= i / 2; ++a) {
			int cal = a * (i - a) + D[a] + D[i - a];
			if (max < cal) max = cal;
		}
		D[i] = max;
	}
	std::cout << D[N];

	return 0;
}