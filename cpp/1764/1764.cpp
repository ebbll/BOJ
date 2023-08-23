#include <iostream>
#include <string>
#include <set>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, m;
	std::cin >> n >> m;
	std::set<std::string> s1, s2, res;
	for (int i = 0; i < n; ++i)
	{
		std::string str;
		std::cin >> str;
		s1.insert(str);
	}
	for (int i = 0; i < m; ++i)
	{
		std::string str;
		std::cin >> str;
		s2.insert(str);
	}
	std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(res, res.begin()));
	std::cout << res.size() << '\n';
	for (std::set<std::string>::iterator it = res.begin(); it != res.end(); ++it)
	{
		std::cout << *it << '\n';
	}
	return 0;
}
