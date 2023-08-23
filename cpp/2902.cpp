#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string full;
	std::cin >> full;

	std::vector<std::string> res;
	std::stringstream ss(full);
	std::string temp;
	char delim = '-';
	while (getline(ss, temp, delim))
	{
		res.push_back(temp);
	}
	for (int i = 0; i < res.size(); ++i)
	{
		std::cout << res[i][0];
	}

	return 0;
}