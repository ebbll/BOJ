#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compare(std::string A, std::string B)
{
	if (A.length() != B.length())
		return (A.length() < B.length());
	int asum = 0, bsum = 0;
	for (char c: A)
	{
		if (c >= '1' && c <= '9')
			asum += c - '0';
	}
	for (char c: B)
	{
		if (c >= '1' && c <= '9')
			bsum += c - '0';
	}
	if (asum != bsum)
		return (asum < bsum);
	return (A < B);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<std::string> list(N);
	for (int i = 0; i < N; ++i)
	{
		std::cin >> list[i];
	}
	std::sort(list.begin(), list.end(), compare);
	for (int i = 0; i < N; ++i)
	{
		std::cout << list[i] << '\n';
	}

	return 0;
}