#include <iostream>
#include <queue>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::queue<int>	queue;
	int	n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		queue.push(i + 1);
	}
	for (int i = 0; i < n - 1; ++i)
	{
		queue.pop();
		queue.push(queue.front());
		queue.pop();
	}
	std::cout << queue.front();

	return 0;
}
