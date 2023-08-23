#include <iostream>
#include <vector>

int N, M;

int matrix[100][100];

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
	int input;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cin >> input;
			matrix[i][j] += input;
		}
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}