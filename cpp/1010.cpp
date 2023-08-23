#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;
	for (int loop = 0; loop < T; ++loop)
	{
		int N, M;
		long long res = 1;
		std::cin >> N >> M;
		for(int i = 0; i < N; ++i)
		{
			res *= M - i; 
			res /= 1 + i;
		}
		std::cout << res << '\n';
	}

	return 0;
}