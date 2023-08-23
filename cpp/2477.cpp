#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int k;
	std::cin >> k;
	std::vector<std::pair<int, int> > v;
	for (int i = 0; i < 6; ++i)
	{
		int dir, len;
		std::cin >> dir >> len;
		v.push_back(std::make_pair(dir, len));
	}
	std::vector<int> check(4);
	int width = 0, height = 0, x, y;
	for (int i = 0; i < 6; ++i)
	{
		int dir = v[i].first;
		if (check[dir] == 1)
		{
			if (dir == 1 || dir == 2)
			{
				if (v[(i + 4) % 6].first == dir)
					y = v[(i + 5) % 6].second;
				else
					y = v[(i + 1) % 6].second;
			}
			else
			{
				if (v[(i + 4) % 6].first == dir)
					x = v[(i + 5) % 6].second;
				else
					x = v[(i + 1) % 6].second;
			}
		}
		else
		{
			check[dir] = 1;
		}

		if (dir == 1 || dir == 2)
		{
			if (width < v[i].second)
				width = v[i].second;
		}
		else
		{
			if (height < v[i].second)
				height = v[i].second;
		}
	}
	//std::cout << width << ' ' << height << '\n' << x << ' ' << y << '\n';
	std::cout << (width * height - x * y) * k;

	return 0;
}