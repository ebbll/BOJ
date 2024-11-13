#include <iostream>

int N, M;
int arr[1026][1026];
int sum[1026][1026];
int xa, xb, ya, yb;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 1; i <= N; ++i)
		for (int j = 1; j <= N; ++j)
		{
			std::cin >> arr[i][j];
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
		}

	for (int l = 0; l < M; ++l)
	{
		std::cin >> xa >> ya >> xb >> yb;
		int res = sum[xb][yb] - sum[xa - 1][yb] - sum[xb][ya - 1] + sum[xa - 1][ya - 1];
		std::cout << res << '\n';
	}

	return 0;
}