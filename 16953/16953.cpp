#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int A, B;
	std::cin >> A >> B;

	std::queue<std::pair<long long, long long> > queue;
	queue.push(std::make_pair(A, 1));
	while (queue.empty() == false)
	{
		long long value = queue.front().first;
		long long step = queue.front().second;
		queue.pop();
		if (value == B)
		{
			std::cout << step;
			return 0;
		}
		if (value * 2 <= B)
		{
			queue.push(std::make_pair(value * 2, step + 1));
		}
		if (value * 10 + 1 <= B)
		{
			queue.push(std::make_pair(value * 10 + 1, step + 1));
		}
	}
	std::cout << "-1";

	return 0;
}