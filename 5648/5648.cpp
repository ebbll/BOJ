#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<long long> list(N);
	for (int i = 0; i < N; ++i)
	{
		std::string input;
		std::cin >> input;
		long long val = 0;
		for (int j = input.length() - 1; j >= 0; --j)
		{
			val = val * 10 + static_cast<long long>(input[j] - '0');
		}
		list[i] = val;
	}
	std::sort(list.begin(), list.end());
	for (int i = 0; i < N; ++i)
	{
		std::cout << list[i] << '\n';
	}

	return 0;
}