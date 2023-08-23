#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int N, C;

std::map<int, int> map;
std::map<int, int> sequence;

bool compare(std::pair<int, int> A, std::pair<int, int> B)
{
	if (A.second != B.second)
		return (A.second > B.second);
	return (sequence[A.first] < sequence[B.first]);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> C;
	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		if (map.find(input) == map.end())
			sequence.insert(std::make_pair(input, map.size()));
		++map[input];
	}
	std::vector<std::pair<int, int> > list(map.begin(), map.end());
	std::sort(list.begin(), list.end(), compare);
	for (auto it: list)
	{
		for (int i = 0; i < it.second; ++i)
		{
			std::cout << it.first << ' ';
		}
	}

	return 0;
}