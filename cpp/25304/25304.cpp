#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int X, N;
	std::cin >> X >> N;
	for (int loop = 0; loop < N; ++loop)
	{
		int price, amount;
		std::cin >> price >> amount;
		X -= price * amount;
	}
	if (X)
		std::cout << "No";
	else
		std::cout << "Yes";

	return 0;
}