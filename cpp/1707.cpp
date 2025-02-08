#include <iostream>

int K, V, E;
int v1, v2;
bool graph[20001][20001];
bool visited[20001];
int count;

void memReset(void) {
	count = 0;
	memset(visited, false, sizeof(bool) * 20001);
	memset(graph, false, sizeof(bool) * 20001 * 20001);
}

void dfs(int node) {
	bool possible = false;

	if (visited[node]) return ;

	visited[node] = true;
	for (int i = 1; i <= V; ++i) {
		if (graph[node][i] && !visited[i]) {
			possible = true;
			dfs(i);
		}
	}

	if (!possible) 
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> K;
	for (int loop = 0; loop < K; ++loop) {
		std::cin >> V >> E;
		for (int i = 0; i < E; ++i) {
			std::cin >> v1 >> v2;
			graph[v1][v2] = true;
			graph[v2][v1] = true;
		}

		for (int i = 1; i <= V; ++i) dfs(i);

		if (count == 2) std::cout << "YES\n";
		else std::cout << "NO\n";

		if (loop != K - 1) memReset();
	}

	return 0;
}