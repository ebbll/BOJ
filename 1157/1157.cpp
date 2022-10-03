#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> vec(26, 0);

	std::string str;
	std::cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		int idx;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			idx = static_cast<int>(str[i]) - static_cast<int>('A');
			++vec[idx];
		}
		else
		{
			idx = static_cast<int>(str[i]) - static_cast<int>('a');
		}
		++vec[idx];
	}

	std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
	if (std::count(vec.begin(), vec.end(), *max) > 1)
	{
		std::cout << '?';
	}
	else
	{
		char res = max - vec.begin() + 'A';
		std::cout << res;
	}

	return 0;
}
