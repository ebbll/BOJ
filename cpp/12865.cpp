#include <iostream>

int N, K;
int W[102] = {0, };
int V[102] = {0, };
int DP[102][100002];

void solve(void) {
	for (int limit = 1; limit <= K; ++limit) {
		for (int item = 1; item <= N; ++item) {
			if (W[item] > limit) DP[item][limit] = DP[item - 1][limit];
			else DP[item][limit] = DP[item - 1][limit - W[item]] + V[item] > DP[item - 1][limit] ?
				DP[item - 1][limit - W[item]] + V[item] : DP[item - 1][limit];
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> K;
	for (int i = 1; i <= N; ++i) std::cin >> W[i] >> V[i];
	for (int i = 0; i <= N; ++i) DP[i][0] = 0;
	for (int j = 0; j <= K; ++j) DP[0][j] = 0;
	solve();
	std::cout << DP[N][K];

	return 0;
}