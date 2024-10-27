#include <iostream>
#include <vector>
#include <queue>

int N, x, y;
std::vector<int> tree[100002];
int visited[100002];
std::queue<int> Q;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N - 1; ++i) {
		std::cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	Q.push(1);
	visited[1] = 1;
	while (!Q.empty()) {
		int curr = Q.front();
		Q.pop();
		for (size_t i = 0; i < tree[curr].size(); ++i) {
			if (!visited[tree[curr][i]]) {
				Q.push(tree[curr][i]);
				visited[tree[curr][i]] = curr;
			}
		}
	}

	for (int i = 2; i <= N; ++i) std::cout << visited[i] << '\n';

	return 0;
}