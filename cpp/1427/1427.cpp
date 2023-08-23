#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input;
	std::cin >> input;
	std::vector<char> list(input.begin(), input.end());
	std::sort(list.begin(), list.end());
	for (int i = list.size() - 1; i >= 0; --i)
	{
		std::cout << list[i];
	}

	return 0;
}