#include <iostream>

int T1, T2;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T1 >> T2;;
	std::cout << (T1 < T2 ? T1 : T2);

	return 0;
}