#include <iostream>
#include <vector>
#include <algorithm>

int N, M;
int A, B;
int count, maxCount;
std::vector<int> graph[10001];
std::vector<std::pair<int, int> > answer;
bool visited[10001];

void dfs(int node) {
	for (size_t i = 1; i <= graph[node].size(); ++i) {
		if (graph[node][i] && !visited[i]) {
			// std::cout << "visit " << i << "\n";
			++count;
			visited[i] = true;
			dfs(i);
			visited[i] = false;
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> A >> B;
		graph[B].push_back(A);
	}

	for (int i = 1; i <= N; ++i) {
		count = 0;
		visited[i] = true;
		dfs(i);
		if (count > maxCount) maxCount = count;
		answer.push_back({i, count});
		// std::cout << "loop " << i << " counted " << count << "\n";
	}

	for (size_t i = 0; i < answer.size(); ++i) {
		if (answer[i].second == maxCount)
			std::cout << answer[i].first << " ";
	}

	return 0;
}