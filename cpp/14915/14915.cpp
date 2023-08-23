#include <iostream>
#include <string>

std::string letter = "0123456789ABCDEF";


int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int M, N;
	std::cin >> M >> N;
	std::string res = "";
	while (M >= 0)
	{
		res = letter[M % N] + res;
		M /= N;
		if (M == 0)
			break ;
	}
	std::cout << res;

	return 0;
}