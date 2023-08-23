#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::priority_queue<int> plus, minus;
	for (int i = 0; i < n; ++i)
	{
		int x;
		std::cin >> x;
		if (x > 0)
		{
			plus.push(x * -1);
		}
		else if (x < 0)
		{
			minus.push(x);
		}
		else // x == 0
		{
			if (plus.empty() && minus.empty())
			{
				std::cout << "0\n";
			}
			else if (!plus.empty() && !minus.empty())
			{
				if (plus.top() > minus.top())
				{
					std::cout << plus.top() * -1 << '\n';
					plus.pop();
				}
				else
				{
					std::cout << minus.top() << '\n';
					minus.pop();
				}
			}
			else if (!plus.empty() && minus.empty())
			{
				std::cout << plus.top() * -1 << '\n';
				plus.pop();
			}
			else // plus.empty() && !minus.empty()
			{
				std::cout << minus.top() << '\n';
				minus.pop();
			}
		}
	}

	return 0;
}
