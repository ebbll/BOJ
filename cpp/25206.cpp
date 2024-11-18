#include <iostream>
#include <vector>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	double res = 0, sum = 0;
	for (int i = 0; i < 20; ++i)
	{
		std::string name, grade;
		double point;
		std::cin >> name >> point >> grade;
		if (grade == "A+")
			res += 4.5 * point;
		else if (grade == "A0")
			res += 4.0 * point;
		else if (grade == "B+")
			res += 3.5 * point;
		else if (grade == "B0")
			res += 3.0 * point;
		else if (grade == "C+")
			res += 2.5 * point;
		else if (grade == "C0")
			res += 2.0 * point;
		else if (grade == "D+")
			res += 1.5 * point;
		else if (grade == "D0")
			res += 1.0 * point;

		if (grade != "P")
			sum += point;
	}
	std::cout << res / sum;

	return 0;
}