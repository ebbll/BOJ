#include <iostream>
#include <vector>
#include <cmath>
#include <memory.h>

int N;
int S[21][21];
bool team[21];
int min = 2147483647;
int cal;

void dfs(int start, int count) {
	if (count == N / 2) {
		int scoreA = 0, scoreB = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (team[i] && team[j]) scoreA += S[i][j];
				else if (!team[i] && !team[j]) scoreB += S[i][j];
			}
		}

		cal = std::abs(scoreA - scoreB);
		if (min > cal) min = cal;
		return ;
	}

	for (int i = start; i < N; ++i) {
		team[i] = true;
		dfs(i + 1, count + 1);
		team[i] = false;
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			std::cin >> S[i][j];

	dfs(0, 0);
	std::cout << min;

	return 0;
}