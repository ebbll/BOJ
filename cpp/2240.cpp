#include <iostream>

int D[1001][31];
int A[1001];
int T, W;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T >> W;
	for (int i = 1; i <= T; ++i)
	{
		int in;
		std::cin >> in;
		A[i] = in - 1;
	}

	for (int i = 1; i <= T; ++i)
	{
		int pos = 0;
		D[i][0] = A[1] == pos ? 1 : 0;
		for (int j = 1; j <= W; ++j)
		{
			if (j > T)
				D[i][j] = D[i][j - 1];
			else
			{
				int cal1 = D[i - 1][j - 1] + (A[i] == !pos ? 1 : 0);
				int cal2 = D[i - 1][j] + (A[i] == pos ? 1 : 0);
				D[i][j] = std::max(cal1, cal2);
				if (cal1 > cal2)
					pos = (pos + 1) % 2;
			}
		}
	}

	std::cout << D[T][W];

	return 0;
}