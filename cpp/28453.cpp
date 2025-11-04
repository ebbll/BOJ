#include <iostream>
#include <vector>

int N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::vector<int> L(N);

	for (auto& level : L) {
		std::cin >> level;
	}

	for (auto& level : L) {
		if (level == 300) level = 1;
		else if (level < 300 && level >= 275) level = 2;
		else if (level < 275 && level >= 250) level = 3;
		else level = 4;
	}

	for (auto level : L) std::cout << level << " ";

	return 0;
}