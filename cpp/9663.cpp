#include <iostream>
#include <math.h>

int N;
int count;
int board[16];
bool visited[16];

bool failCheck(int pos, int value) {
	for (int i = 1; i < pos; ++i)
		if (abs(value - board[i]) == pos - i)
			return true;
	return false;
}

void dfs(int currPos) {
	if (currPos > N) {
		++count;
		return ;
	}

	for (int i = 1; i <= N; ++i) {
		if (visited[i] || failCheck(currPos, i)) continue;
		board[currPos] = i;
		visited[i] = true;
		dfs(currPos + 1);
		visited[i] = false;
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	dfs(1);

	std::cout << count;
}