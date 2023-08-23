#include <iostream>
#include <set>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::set<std::string> s;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string	name, log;
		std::cin >> name >> log;
		if (log == "enter")
		{
			s.insert(name);
		}
		else
		{
			s.erase(s.find(name));
		}
	}
	for (std::set<std::string>::reverse_iterator it = s.rbegin(); it != s.rend(); ++it)
	{
		std::cout << *it << '\n';
	}

	return 0;
}
