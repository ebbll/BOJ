#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string S;
	std::cin >> S;
	std::vector<std::string> list;
	for (int i = 0; i < S.length(); ++i)
	{
		list.push_back(S.substr(i, S.length() - i));
	}
	std::sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); ++i)
	{
		std::cout << list[i] << '\n';
	}

	return 0;
}