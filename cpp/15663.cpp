#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

int N, M, in;
std::vector<int> nums;
int visited[10];
int comb[10];
std::set<std::string> set;

std::string generate(void) {
	std::string res;

	for (int i = 0; i < M; ++i) {
		res += std::to_string(nums[comb[i]]);
		res += " ";
	}

	return res;
}

void dfs(int count) {
	if (count == M) {
		std::string res = generate();
		if (set.find(res) == set.end()) {
			std::cout << res << "\n";
			set.insert(res);
		}
		return ;
	}

	for (int i = 0; i < N; ++i) {
		if (!visited[i]) {
			visited[i] = 1;
			comb[count] = i;
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