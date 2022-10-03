#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<int> list;
	std::vector<int> indices;
	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		if (std::find(list.begin(), list.end(), input) == list.end())
			indices.push_back(input);
		list.push_back(input);
	}
	std::sort(indices.begin(), indices.end());
	
	for (int i = 0; i < N; ++i)
	{
		std::cout << std::lower_bound(indices.begin(), indices.end(), list[i]) - indices.begin();
	}

	return 0;
}