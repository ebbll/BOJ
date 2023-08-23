#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>

int N;

bool compare(std::pair<std::string, std::tuple<int, int, int> > a, \
			std::pair<std::string, std::tuple<int, int, int> > b)
{
	int a1 = std::get<0>(a.second);
	int b1 = std::get<0>(b.second);
	if (a1 != b1)
		return (a1 > b1);
	int a2 = std::get<1>(a.second);
	int b2 = std::get<1>(b.second);
	if (a2 != b2)
		return (a2 < b2);
	int a3 = std::get<2>(a.second);
	int b3 = std::get<2>(b.second);
	if (a3 != b3)
		return (a3 > b3);
	std::string aa = a.first;
	std::string bb = b.first;
	return (aa < bb);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::vector<std::pair<std::string, std::tuple<int, int, int> > > list;
	for (int i = 0; i < N; ++i)
	{
		std::string name;
		int a, b, c;
		std::cin >> name >> a >> b >> c;
		list.push_back(std::make_pair(name, std::make_tuple(a, b, c)));
	}
	std::sort(list.begin(), list.end(), compare);
	for (int i = 0; i < N; ++i)
	{
		std::cout << list[i].first << '\n';
	}

	return 0;
}