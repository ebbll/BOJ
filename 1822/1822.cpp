#include <iostream>
#include <set>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int na, nb;
	std::cin >> na >> nb;
	std::set<int> A;

	int input;
	for (int i = 0; i < na; ++i)
	{
		std::cin >> input;
		A.insert(input);
	}

	std::set<int> res;
	for (int i = 0; i < nb; ++i)
	{
		std::cin >> input;
		std::set<int>::iterator it = A.find(input);
		if (it != A.end())
		{
			A.erase(it);
		}
	}

	std::cout << A.size() << '\n';
	for (std::set<int>::iterator it = A.begin(); it != A.end(); ++it)
	{
		std::cout << *it << ' ';
	}

	return 0;
}