#include <iostream>
#include <queue>

int n, m;
int graph[1001][1001] = {0, };
int vertex[1001] = {0, };
int count = 0;

void bfs(int i)
{
	vertex[i] = 1;
	for (int loop = 1; loop <= n; ++loop)
	{
		if (graph[i][loop] && vertex[loop] == 0)
		{
			bfs(loop);
		}
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> n >> m;
	std::queue<int> queue;
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		std::cin >> u >> v;
		graph[u][v] = 1;
		graph[v][u] = 1;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		if (vertex[i] == 0)
		{
			++count;
			bfs(i);
		}
	}
	std::cout << count;

	return 0;
}
