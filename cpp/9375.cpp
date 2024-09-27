#include <iostream>
#include <map>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T, N;

	std::cin >> T;
	for (int loop = 0; loop < T; ++loop) {
		int ans = 1;
		std::string name, category;
		std::map<std::string, int> closet;

		std::cin >> N;
		for (int i = 0; i < N; ++i) {
			std::cin >> name >> category;
			++closet[category];
		}

		for (auto it = closet.begin(); it != closet.end(); ++it) {
			ans *= (it->second + 1);
		}
		std::cout << ans - 1 << '\n';
	}

	return 0;
}