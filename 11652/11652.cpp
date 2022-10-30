#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::map<long long, int> cards;
long long answer;
int count = 0;

bool compare(std::pair<long long, int> A, std::pair<long long, int> B)
{
	if (A.second != B.second)
		return (A.second > B.second);
	return (A.first < B.second);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::map<long long, int> cards;
	for (int i = 0; i < N; ++i)
	{
		long long input;
		std::cin >> input;
		++cards[input];
	}
	for (auto it: cards)
	{
		if (count < it.second)
		{
			answer = it.first;
			count = it.second;
		}
		else if (count == it.second)
		{
			if (answer > it.first)
			{
				answer = it.first;
			}
		}
	}
	std::cout << answer;

	return 0;
}