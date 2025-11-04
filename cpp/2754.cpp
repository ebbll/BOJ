#include <iostream>
#include <string>

std::string s, res;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> s;

	if (s == "A+") res = "4.3";
	else if (s == "A0") res = "4.0";
	else if (s == "A-") res = "3.7";
	else if (s == "B+") res = "3.3";
	else if (s == "B0") res = "3.0";
	else if (s == "B-") res = "2.7";
	else if (s == "C+") res = "2.3";
	else if (s == "C0") res = "2.0";
	else if (s == "C-") res = "1.7";
	else if (s == "D+") res = "1.3";
	else if (s == "D0") res = "1.0";
	else if (s == "D-") res = "0.7";
	else res = "0.0";

	std::cout << res;

	return 0;
}