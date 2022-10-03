#include <iostream>
#include <stack>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	

	int n;
	std::cin >> n;
	std::stack<std::pair<int, int> > stack;
	for (int i = 0; i < n; ++i)
	{
		int height;
		std::cin >> height;
		while (!stack.empty())
		{
			if (stack.top().second > height)
			{
				std::cout << stack.top().first << ' ';
				break ;
			}
			stack.pop();
		}
		if (stack.empty())
		{
			std::cout << "0 ";
		}
		stack.push(std::make_pair(i + 1, height));
	}

	return 0;
}