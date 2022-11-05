#include <iostream>
#include <vector>

int matrix[1500][1500];

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::vector<int> indice(N, N - 1);

	int answer;
	for (int i = 0; i < N; ++i)
	{
		int max = INT32_MIN;
		int idx;
		for (int find = 0; find < N; ++find)
		{
			if (matrix[indice[find]][find] > max)
			{
				max = matrix[indice[find]][find];
				idx = find;
			}
		}
		answer = max;
		--indice[idx];
	}
	std::cout << answer;

	return 0;
}