#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;
	std::map<std::string, int> namelist;
	std::map<int, std::string> numlist;

	for (int i = 1; i <= N; ++i)
	{
		std::string name;
		std::cin >> name;
		namelist[name] = i;
		numlist[i] = name;
	}
	for (int i = 0; i < M; ++i)
	{
		std::string find;
		std::cin >> find;
		if (find[0] >= '1' && find[0] <= '9')
		{
			int num = std::stoi(find);
			std::cout << numlist[num] << '\n';
		}
		else
		{
			std::cout << namelist[find] << '\n';
		}
	}

	return 0;
}