#include <iostream>
#include <vector>
#include <string>

int N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	while (N != -1) {
		int sum = 0;
		std::vector<int> l;
		for (int i = 1; i < N; ++i) {
			if (N % i == 0) {
				sum += i;
				l.push_back(i);
			}
		}
		if (sum == N) {
			std::string res = std::to_string(N) + " = ";
			for (size_t i = 0; i < l.size(); ++i) {
				res += std::to_string(l[i]);
				if (i != l.size() - 1) res += " + ";
			}
			std::cout << res << '\n';
		}
		else std::cout << std::to_string(N) << " is NOT perfect.\n";
		std::cin >> N;
	}

	return 0;
}