#include <iostream>
#include <deque>

int N, C, X;
std::deque<int> D;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> C;
		if (C == 1) {
			std::cin >> X;
			D.push_front(X);
		} else if (C == 2) {
			std::cin >> X;
			D.push_back(X);
		} else if (C == 3) {
			if (D.empty()) std::cout << "-1\n";
			else {
				std::cout << D.front() << '\n';
				D.pop_front();
			}
		} else if (C == 4) {
			if (D.empty()) std::cout << "-1\n";
			else {
				std::cout << D.back() << '\n';
				D.pop_back();
			}
		} else if (C == 5) {
			std::cout << D.size() << '\n';
		} else if (C == 6) {
			std::cout << D.empty() << '\n';
		} else if (C == 7) {
			if (D.empty()) std::cout << "-1\n";
			else std::cout << D.front() << '\n';
		} else {
			if (D.empty()) std::cout << "-1\n";
			else std::cout << D.back() << '\n';
		}
	}

	return 0;
}