#include <iostream>
#include <vector>
#include <algorithm>

int N, M, R;
int u, v;
std::vector<int> graph[100001];
int visited[100001];
int seq = 1;

void dfs(int node) {
	for (size_t i = 0; i < graph[node].size(); ++i) {
		int next = graph[node][i];
		if (!visited[next]) {
			++seq;
			visited[next] = seq;
			dfs(next);
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M >> R;
	for (int i = 0; i < M; ++i) {
		std::cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; ++i) std::sort(graph[i].begin(), graph[i].end());

	visited[R] = seq;
	dfs(R);

	for (int i = 1; i <= N; ++i) std::cout << visited[i] << "\n";

	return 0;
}