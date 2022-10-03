#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int visited[101] = {0, };
	int graph[101][101] = {0, };

	int N, K;
	std::cin >> N >> K;

	for (int loop = 0; loop < K; ++loop)
	{
		int a, b;
		std::cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	std::queue<int> queue;
	queue.push(1);
	visited[1] = 1;
	int count = 0;
	while (queue.empty() == false)
	{
		int curr = queue.front();
		queue.pop();
		for (int i = 1; i <= N; ++i)
		{
			if (visited[i] || graph[curr][i] == 0)
				continue ;
			queue.push(i);
			visited[i] = 1;
			++count;
		}
	}
	std::cout << count;

	return 0;
}
