#include <iostream>
#include <vector>
#include <memory.h>

int N;
int parent, child, weight;
int diameter;
int max;
std::vector<std::pair<int, int> > graph[10001];
bool visited[10001];

void dfs(int node) {
	bool possible = false;

	for (size_t i = 0; i < graph[node].size(); ++i) {
		int next = graph[node][i].first;
		int weight = graph[node][i].second;
		if (!visited[next]) {
			possible = true;
			visited[next] = true;
			diameter += weight;
			dfs(next);
			diameter -= weight;
		}
	}

	if (!possible && diameter > max) max = diameter;
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N - 1; ++i) {
		std::cin >> parent >> child >> weight;
		graph[parent].push_back({child, weight});
		graph[child].push_back({parent, weight});
	}

	for (int i = 1; i <= N; ++i) {
		visited[i] = true;
		dfs(i);
		diameter = 0;
		memset(visited, false, sizeof(bool) * 10001);
	}

	std::cout << max;

	return 0;
}