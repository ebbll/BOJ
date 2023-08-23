#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::vector<int> input;
	while (std::cin >> n)
	{
		input.push_back(n);
	}

	int sum = input[input.size() - 1];
	input.erase(input.end() - 1);

	int index = 0;
	std::set<std::pair<int, int> > pair;
	for (int i = 0; i < input.size(); ++i)
	{
		for (int j = 0; j < input.size(); ++j)
		{
			if (input[i] + input[j] == sum && i < j)
			{
				pair.insert(std::make_pair(input[i], input[j]));
			}
		}
	}

	for (auto& p : pair)
	{
		std::cout << p.first << ' ' << p.second << '\n';
	}
	std::cout << pair.size();

	return 0;
}