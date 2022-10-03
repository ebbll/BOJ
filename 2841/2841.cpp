#include <iostream>
#include <stack>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, p;
	std::cin >> n >> p;
	std::stack<int> finger[6];
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		int line, pret;
		std::cin >> line >> pret;
		if (finger[line - 1].empty() || finger[line - 1].top() < pret)
		{
			finger[line - 1].push(pret);
			++res;
		}
		else
		{
			while (finger[line - 1].empty() == false && finger[line - 1].top() > pret)
			{
				finger[line - 1].pop();
				++res;
			}
			if (!(finger[line - 1].empty() == false && finger[line - 1].top() == pret))
			{
				finger[line - 1].push(pret);
				++res;
			}
		}
	}
	std::cout << res;

	return 0;
}
