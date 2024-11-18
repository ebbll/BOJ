#include <iostream>

int N, a, b;
int minx, miny, maxx, maxy;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	minx = 10000; miny = 10000;
	maxx = -10000; maxy = -10000;

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> a >> b;
		minx = a < minx ? a : minx;
		miny = b < miny ? b : miny;
		maxx = a > maxx ? a : maxx;
		maxy = b > maxy ? b : maxy;
	}

	std::cout << (maxx - minx) * (maxy - miny);

	return 0;
}