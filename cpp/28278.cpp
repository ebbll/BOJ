#include <iostream>
#include <stack>

int N, C, X;
std::stack<int> S;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> C;
		if (C == 1) {
			std::cin >> X;
			S.push(X);
		} else if (C == 2) {
			if (S.empty()) std::cout << -1 << '\n';
			else {
				std::cout << S.top() << '\n'; S.pop();
			}
		} else if (C == 3) {
			std::cout << S.size() << '\n';
		} else if (C == 4) {
				std::cout << S.empty() << '\n';
		} else {
				if (S.empty()) std::cout << -1 << '\n';
				else std::cout << S.top() << '\n';
		}
	}

	return 0;
}