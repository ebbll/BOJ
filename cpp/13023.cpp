#include <iostream>
#include <vector>

int N, M;
int v1, v2;

std::vector<int> graph[2001];
int visited[2001];

bool res;

void dfs(int start, int depth) {
	if (depth == 5) {
		res = true;
		return;
	}

	for (size_t i = 0; i < graph[start].size(); ++i) {
		int next = graph[start][i];
		if (visited[next]) continue;

		visited[next] = true;
		dfs(next, depth + 1);
		visited[next] = false;
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	for (int i = 0; i < N; ++i) {
		visited[i] = true;
		dfs(i, 1);
		if (res) break;
		visited[i] = false;
	}

	std::cout << res;

	return 0;
}