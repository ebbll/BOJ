#include <iostream>
#include <queue>

int main(void)
{
	int N;
	std::cin >> N;
	std::priority_queue<int, std::vector<int>, std::greater<int> > queue;
	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		queue.push(input);
	}
	while (queue.empty() == false)
	{
		std::cout << queue.top() << '\n';
		queue.pop();
	}

	return 0;
}