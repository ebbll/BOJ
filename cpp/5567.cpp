#include <iostream>

int n, m;
const int MAX = 501;
int map[MAX][MAX];
bool visited[MAX];
bool sFriend[MAX]; //상근이와 친구 여부
int ans = 0;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> n >> m;
	int relationship[n][n];
	bool invited[n];
	std::fill(invited, invited + n, false);
	for (int i = 0; i < n; ++i)
	{
		std::fill(relationship[i], relationship[i] + n, 0);
	}
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		relationship[a-1][b-1] = 1;
		relationship[b-1][a-1] = 1;
	}

	return 0;
}
