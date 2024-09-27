#include <iostream>
#include <vector>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, V;
	std::cin >> N;
	std::vector<int> POINT(N + 1, 0);
	std::vector<int> DP(N + 1, 0);

	for (int i = 1; i <= N; ++i) {
		std::cin >> V;
		POINT[i] = V;
	}

	DP[1] = POINT[1];
	DP[2] = POINT[1] + POINT[2];
	DP[3] = POINT[1] > POINT[2] ? POINT[1] + POINT[3] : POINT[2] + POINT[3];

	for (int i = 4; i <= N; ++i)
	{
		int case1 = DP[i - 2] + POINT[i];
		int case2 = DP[i - 3] + POINT[i - 1] + POINT[i];
		DP[i] = case1 > case2 ? case1 : case2;
	}
	
	std::cout << DP[N];

	return 0;
}