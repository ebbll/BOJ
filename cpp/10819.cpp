#include <iostream>
#include <cstdlib>

int N;
int nums[10];
bool visited[10];
int order[10];
int max;

void dfs(int count) {
	if (count == N) {
		int cal = 0;
		for (int i = 1; i <= N - 1; ++i)
			cal += std::abs(nums[order[i]] - nums[order[i - 1]]);
		max = cal > max ? cal : max;
		return ;
	}

	for (int i = 0; i < N; ++i) {
		if (!visited[i]) {
			order[count] = i;
			visited[i] = true;
			dfs(count + 1);
			visited[i] = false;
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) std::cin >> nums[i];

	dfs(0);

	std::cout << max;

	return 0;
}