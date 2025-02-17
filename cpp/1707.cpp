#include <iostream>
#include <vector>
#include <memory.h>

int K, V, E;
int p;
int group[20001];
std::vector<int> connection[20001];

void dfs(int node, int c) {
	if (group[node]) {
		if (group[node] != c) p = 0;
		return ;
	}

	group[node] = c;
	for (size_t i = 0; i < connection[node].size(); ++i)
		dfs(connection[node][i], 3 - c);
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> K;
	while (K--) {
		p = 1;
		memset(group, 0, sizeof(int) * 20001);
		for (int i = 1; i <= 20000; ++i) connection[i].clear();

		std::cin >> V >> E;
		for (int i = 0; i < E; ++i) {
			int e1, e2;
			std::cin >> e1 >> e2;
			connection[e1].push_back(e2);
			connection[e2].push_back(e1);
		}

		for (int i = 1; i <= V; ++i) if (!group[i]) dfs(i, 1);
		if (p == 1) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}