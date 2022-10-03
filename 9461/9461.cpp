#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;

	std::vector<long long> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(2);
	for (int i = 5; i <= 100; ++i)
	{
		vec.push_back(vec[i - 1] + vec[i - 5]);
	}

	for (int loop = 0; loop < t; ++loop)
	{
		int n;
		std::cin >> n;
		std::cout << vec[n - 1] << std::endl;
	}

	return 0;
}
