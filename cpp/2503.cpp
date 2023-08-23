#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::vector<int> vec(1000, 0);

	for (int loop = 0; loop < n; ++loop)
	{
		int num, strikes, balls;
		std::cin >> num >> strikes >> balls;
		std::vector<int> v1;
		v1.push_back(num / 100);
		v1.push_back(num % 100 / 10);
		v1.push_back(num % 10);
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 1; j < 10; ++j)
			{
				if (j == i)
					continue;
				for (int k = 1; k < 10; ++k)
				{
					if (k == i || k == j)
						continue;
					int index = 100 * i + 10 * j + k;
					int s = 0, b = 0;
					std::vector<int> v2;
					v2.push_back(i);
					v2.push_back(j);
					v2.push_back(k);
					for (int x = 0; x < 3; ++x)
					{
						if (v2[x] == v1[x])
						{
							++s;
						}
						else if (std::find(v1.begin(), v1.end(), v2[x]) != v1.end())
						{
							++b;
						}
					}
					if (s == strikes && b == balls)
					{
						++vec[index];
					}
				}
			}
		}
	}
	std::cout << std::count(vec.begin(), vec.end(), n);

	return 0;
}
