#include <iostream>
#include <string>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	for (int loop = 0; loop < t; ++loop)
	{
		int n;
		std::cin >> n;
		std::vector<std::string> list(n);
		for (int i = 0; i < n; ++i)
		{
			std::cin >> list[i];
		}
		std::string res = list[0];
		for (int i = 1; i < list.size(); ++i)
		{
			if (list[i][0] <= res[0])
				res = list[i] + res;
			else
				res = res + list[i];
		}
		std::cout << res << '\n';
	}

	return 0;
}
