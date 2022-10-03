#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, k;
	std::cin >> n >> k;
	std::vector<int> rev(k, 0);

	for (int i = 0; i < k; ++i)
	{
		int	val = (i + 1) * n;
		while (val > 0)
		{
			rev[i] = rev[i] * 10 + val % 10;
			val /= 10;
		}
	}
	std::cout << *std::max_element(rev.begin(), rev.end());

	return 0;
}
