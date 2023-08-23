#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compare(std::string a, std::string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<std::string> list;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string input;
		std::cin >> input;
		if (std::find(list.begin(), list.end(), input) == list.end())
			list.push_back(input);
	}
	std::sort(list.begin(), list.end(), compare);
	for (int i = 0; i < list.size(); ++i)
	{
		std::cout << list[i] << '\n';
	}

	return 0;
}