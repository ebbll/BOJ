#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	std::vector<int> vec;
	int loop = 1;
	while (true)
	{
		int cal = loop * (loop + 1) / 2;
		if (cal > 1000)
			break ;
		vec.push_back(cal);
		loop++;
	}
	for (int loop = 0; loop < t; ++loop)
	{
		int k;
		std::cin >> k;

		bool flag = false;
		for (int x = 0; x < vec.size(); ++x)
		{
			for (int y = 0; y < vec.size(); ++y)
			{
				for (int z = 0; z < vec.size(); ++z)
				{
					if (k == vec[x] + vec[y] + vec[z])
						flag = true;
					if (flag)
						break;
				}
				if (flag)
					break;
			}
			if (flag)
				break;
		}
		if (flag)
			std::cout << "1\n";
		else
			std::cout << "0\n";
	}

	return 0;
}
