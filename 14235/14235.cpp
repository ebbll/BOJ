#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::priority_queue<int> gift;
	for (int i = 0; i < n; ++i)
	{
		int a;
		std::cin >> a;
		if (a == 0)
		{
			if (gift.empty())
			{
				std::cout << "-1\n";
			}
			else
			{
				std::cout << gift.top() << '\n';
				gift.pop();
			}
		}
		else
		{
			for (int loop = 0; loop < a; ++loop)
			{
				int value;
				std::cin >> value;
				gift.push(value);
			}
		}
	}

	return 0;
}
