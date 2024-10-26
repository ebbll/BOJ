#include <iostream>
#include <queue>

int N, M, x, y, p, c;
int rel[102][102];
int visited[102];
std::queue<int> q;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> x >> y >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> p >> c;
		rel[p][c] = 1; rel[c][p] = 1;
	}

	q.push(x);
	while (!q.empty()) {
		int curr = q.front();
		q.pop();

		for (int i = 1; i <= N; ++i) {
			if (rel[curr][i] && !visited[i]) {
				q.push(i);
				visited[i] = visited[curr] + 1;
			}
		}
	}

	if (visited[y]) std::cout << visited[y]; else std::cout << -1;

	return 0;
}