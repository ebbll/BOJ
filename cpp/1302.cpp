#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::vector<std::string> all;
	std::set<std::string> books;
	for (int i = 0; i < n; ++i)
	{
		std::string name;
		std::cin >> name;
		all.push_back(name);
		books.insert(name);
	}
	int max = 0;
	std::string res;
	for (std::set<std::string>::iterator it = books.begin(); it != books.end(); ++it)
	{
		int count = std::count(all.begin(), all.end(), *it);
		if (count > max)
		{
			max = count;
			res = *it;
		}
	}
	std::cout << res;

	return 0;
}
