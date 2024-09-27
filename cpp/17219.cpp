#include <iostream>
#include <map>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::string addr, pass;
	std::map<std::string, std::string> pwbook;

	std::cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		std::cin >> addr >> pass;
		pwbook.insert({addr, pass});
	}
	for (int i = 0; i < M; ++i) {
		std::cin >> addr;
		std::cout << pwbook[addr] << '\n';
	}

	return 0;
}