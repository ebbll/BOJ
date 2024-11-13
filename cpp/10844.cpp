#include <iostream>

#define mod 1000000000

int N, res;
int D[102][10];

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 1; i <= 9; ++i)
		D[1][i] = 1;
	for (int i = 2; i <= N; ++i)
	{
		for (int x = 0; x <= 9; ++x)
		{
			if (x == 0)
				D[i][x] = D[i - 1][x + 1];
			else if (x == 9)
				D[i][x] = D[i - 1][x - 1];
			else
				D[i][x] = (D[i - 1][x - 1] + D[i - 1][x + 1]) % mod;
		}
	}
	for (int i = 0; i <= 9; ++i)
		res = (res + D[N][i]) % mod;
	std::cout << res;

	return 0;
}