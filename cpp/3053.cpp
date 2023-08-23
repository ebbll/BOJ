#include <iostream>
#include <cmath>
#include <iomanip>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	double	r;
	std::cin >> r;

	double u, t;
	u = M_PI * pow(r, 2);
	t = 2 * pow(r, 2);

	std::cout << std::fixed << u << '\n';
	std::cout << std::fixed << t << '\n';
	return 0;
}
