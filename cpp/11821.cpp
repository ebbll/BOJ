#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string S;
	std::cin >> S;

	int count = 0;
	for (unsigned long i = 0; i < S.length(); ++i) {
		if (S[i] == ',') ++count;
	}
	std::cout << count + 1;

	return 0;
}