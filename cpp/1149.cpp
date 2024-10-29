#include <iostream>
#include <algorithm>

int N;
int cost[3];
int house[1001][3];

int main() {
	house[0][0] = 0; house[0][1] = 0; house[0][2] = 0;

	std::cin >> N;
	for(int i = 1; i <= N; ++i) {
		std::cin >> cost[0] >> cost[1] >> cost[2];
		house[i][0] = std::min(house[i-1][1],house[i-1][2]) + cost[0];
		house[i][1] = std::min(house[i-1][0],house[i-1][2]) + cost[1];
		house[i][2] = std::min(house[i-1][1],house[i-1][0]) + cost[2];
	}

	std::cout << std::min(std::min(house[N][0], house[N][1]), house[N][2]);
}