#include <iostream>
#include <vector>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> vec(3);
	vec[0] = 300;
	vec[1] = 60;
	vec[2] = 10;
	int ret[3] = {0, };
	int t;
	std::cin >> t;
	for (int i = 0; i < 3; ++i)
	{
		ret[i] = t / vec[i];
		t %= vec[i];
	}
	if (t != 0)
		std::cout << -1;
	else
		std::cout << ret[0] << ' ' << ret[1] << ' ' << ret[2];

	return 0;
}