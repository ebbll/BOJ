#include <iostream>
#include <set>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::set<int> s;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int input;
		std::cin >> input;
		s.insert(input);
	}

	int m;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int check;
		std::cin >> check;
		if (s.find(check) != s.end())
		{
			std::cout << "1 ";
		}
		else
		{
			std::cout << "0 ";
		}
	}

	return 0;
}