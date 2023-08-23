#include <iostream>
#include <vector>
#include <algorithm>

int T;
int N, M;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> M;
		std::vector<int> A(N), B(M);
		for (int i = 0; i < N; ++i)
		{
			std::cin >> A[i];
		}
		for (int i = 0; i < M; ++i)
		{
			std::cin >> B[i];
		}
		std::sort(A.begin(), A.end());
		std::sort(B.begin(), B.end());
		int res = 0;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				if (A[i] <= B[j])
					break;
				++res;
			}
		}
		std::cout << res << '\n';
	}

	return 0;
}