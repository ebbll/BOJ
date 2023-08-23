#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::priority_queue<int, std::vector<int>, std::greater<int> > list;
	int N;
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		int time;
		std::cin >> time;
		list.push(time);
	}
	int time = 0;
	for (int i = N; i > 0; --i)
	{
		time += i * list.top();
		list.pop();
	}
	std::cout << time;

	return 0;
}