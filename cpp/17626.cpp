#include <iostream>
#include <vector>
#include <cmath>

int N;
int start = 1;
std::vector<int> DP(50002);

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	DP[0] = 0;
	while (start <= N) {
		int min = 4;
		for (int range = floor(sqrt(start)); range > 0; range--) {
			int rest = DP[start - range * range];
			min = min < rest ? min : rest;
		}
		DP[start++] = 1 + min;
	}

	std::cout << DP[N];

	return 0;
}