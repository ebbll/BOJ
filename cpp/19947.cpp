#include <iostream>
#include <cmath>

int H, Y;
int D[12];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> H >> Y;
	D[0] = H;
	for (int i = 1; i <= Y; ++i) {
		D[i] = (int)(1.05 * D[i - 1]);
		if (i >= 3) D[i] = std::max(D[i], (int)(1.2 * D[i - 3]));
		if (i >= 5) D[i] = std::max(D[i], (int)(1.35 * D[i - 5]));
	}
	std::cout << D[Y];

	return 0;
}