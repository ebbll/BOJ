#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int hour, min, time;
	std::cin >> hour >> min >> time;
	int addh, addm;
	addm = time % 60;
	addh = time / 60;
	min += addm;
	if (min >= 60)
		++addh;
	min %= 60;
	hour = (addh + hour) % 24;
	std::cout << hour << ' ' << min;

	return 0;
}