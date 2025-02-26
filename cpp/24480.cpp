#include <iostream>
#include <vector>
#include <algorithm>

int N, M, R;
int count;
int s, e;
int visited[100001];
std::vector<int> graph[100001];

void dfs(int node) {
	for (size_t i = 0; i < graph[node].size(); ++i) {
		int next = graph[node][i];
		if (!visited[next]) {
			visited[next] = ++count;
			dfs(next);
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M >> R;
	for (int i = 0; i < M; ++i) {
		std::cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}
	for (int i = 1; i <= N; ++i) std::sort(graph[i].begin(), graph[i].end(), std::greater<>());

	visited[R] = ++count;
	dfs(R);

	for (int i = 1; i <= N; ++i) std::cout << visited[i] << "\n";

	return 0;
}