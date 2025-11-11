#include <iostream>
#include <vector>
#include <algorithm>

int N, M, in;
std::vector<int> nums;
int comb[10];
int visited[10];

void dfs(int count) {
	if (count == M) {
		for (int i = 0; i < M; ++i) {
			std::cout << nums[comb[i]] << " ";
		}
		std::cout << "\n";
		return ;
	}

	for (int i = 0; i < N; ++i) {
		if (!visited[i]) {
			comb[count] = i;
			visited[i] = 1;
			dfs(count + 1);
			visited[i] = 0;
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		std::cin >> in;
		nums.push_back(in);
	}

	std::sort(nums.begin(), nums.end());

	dfs(0);

	return 0;
}