#include <iostream>
#include <vector>

std::vector<int> D(11, 0);

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	D[1] = 1;
	D[2] = 2;
	D[3] = 4;
	for (int i = 4; i < 11; ++i)
	{
		D[i] = D[i - 1] + D[i - 2] + D[i - 3];
	}

	int T;
	std::cin >> T;
	for (int loop = 0; loop < T; ++loop)
	{
		int N;
		std::cin >> N;
		std::cout << D[N] << '\n';
	}

	return 0;
}