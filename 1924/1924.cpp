#include <iostream>
#include <string>

int main(void)
{
	int month, date;
	std::cin >> month >> date;

	int days = -1;
	for (int i = 1; i <= month - 1; ++i)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			days += 31;
		}
		else if (i == 2)
		{
			days += 28;
		}
		else
		{
			days += 30;
		}
	}
	days += date;

	std::string list[7];
	list[0] = "MON";
	list[1] = "TUE";
	list[2] = "WED";
	list[3] = "THU";
	list[4] = "FRI";
	list[5] = "SAT";
	list[6] = "SUN";
	std::cout << list[days % 7];

	return 0;
}