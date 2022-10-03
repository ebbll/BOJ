#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N;
	std::vector<int> cards(N);
	for (int i = 0; i < N; ++i)
	{
		std::cin >> cards[i];
	}
	std::cin >> M;
	std::vector<int> list(M);
	for (int i = 0; i < M; ++i)
	{
		std::cin >> list[i];
	}

	std::sort(cards.begin(), cards.end());
	for (int i = 0; i < list.size(); ++i)
	{
		std::cout << std::upper_bound(cards.begin(), cards.end(), list[i]) \
					- std::lower_bound(cards.begin(), cards.end(), list[i]) << ' ';
	}

	return 0;
}