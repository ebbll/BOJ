#include <iostream>
#include <vector>
#include <cmath>

double A[10][10] = {0, };

bool isSquare(double n)
{
	int temp = std::sqrt(n + 0.5);
	return temp * temp == n;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cin >> A[i][j];
		}
	}
	double res = 0;
	for (int xgap = 0; xgap <= N; ++xgap)
	{
		for (int ygap = 0; ygap <= M; ++ygap)
		{
			if (xgap == 0 && ygap == 0)
				continue ;
			int forward = 0, reverse = 0;
			
		}
	}

	return 0;
}