#include <iostream>
#include <deque>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, K;
	std::cin >> N >> K;
	std::deque<std::pair<int, int> > circle;
	for (int i = 1; i <= N; ++i)
	{
		circle.push_back(std::make_pair(i, 1));
	}

	std::cout << '<';
	int count = 0;
	int curr = N - 1;
	while (count < N)
	{
		int term = 0;
		while (term < K)
		{
			curr = (curr + 1) % N;
			if (circle[curr].second == 1)
			{
				++term;
			}
		}
		std::cout << circle[curr].first;
		if (count != N - 1)
			std::cout << ", ";
		circle[curr].second = 0;
		++count;
	}
	std::cout << '>';

	return 0;
}