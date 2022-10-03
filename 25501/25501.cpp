#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;
	for (int i = 0; i < T; ++i)
	{
		std::string input;
		std::cin >> input;
		int res = 1, count = 0;
		for (int idx = 0; idx <= input.length() / 2; ++idx)
		{
			++count;
			if (input[idx] != input[input.length() - idx - 1])
			{
				res = 0;
				break ;
			}
		}
		std::cout << res << ' ' << count << '\n';
	}

	return 0;
}