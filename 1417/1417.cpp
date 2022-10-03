#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, first;
	std::cin >> n >> first;
	std::priority_queue<int> candidate;
	for (int i = 0; i < n - 1; ++i)
	{
		int num;
		std::cin >> num;
		candidate.push(num);
	}
	if (candidate.empty() == false)
	{
		int count = 0;
		while (true)
		{
			int top = candidate.top();
			if (first > top)
				break ;
			--top;
			++first;
			++count;
			candidate.pop();
			candidate.push(top);
		}
		std::cout << count;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}
