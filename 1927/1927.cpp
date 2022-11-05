#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::priority_queue<int, std::vector<int>, std::greater<int> > queue;
	for (int i = 0; i < N; ++i)
	{
		int x;
		std::cin >> x;
		if (x == 0)
		{
			if (queue.empty() == true)
			{
				std::cout << "0\n";
			}
			else
			{
				std::cout << queue.top() << '\n';
				queue.pop();
			}
		}
		else
		{
			queue.push(x);
		}
	}

	return 0;
}