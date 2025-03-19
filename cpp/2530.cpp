#include <iostream>

int hh, mm, ss;
int seconds;
int h, m, s;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> hh >> mm >> ss >> seconds;
	s = (ss + seconds ) % 60;


	return 0;
}