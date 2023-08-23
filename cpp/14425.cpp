#include <iostream>
#include <set>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, m;
	std::cin >> n >> m;
	std::set<std::string> s;
	for (int i = 0; i < n; ++i)
	{
		std::string str;
		std::cin >> str;
		s.insert(str);
	}
	int count = 0;
	for (int i = 0; i < m; ++i)
	{
		std::string check;
		std::cin >> check;
		if (s.find(check) != s.end())
			++count;
	}
	std::cout << count;

	return 0;
}