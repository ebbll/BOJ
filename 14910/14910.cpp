#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int before = -1000000, count = 0, n;
	bool res = true;
	while (std::cin >> n)
	{
		if (before > n)
		{
			res = false;
			break ;
		}
		before = n;
	}
	if (res)
		std::cout << "Good";
	else
		std::cout << "Bad";

	return 0;
}