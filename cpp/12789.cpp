#include <iostream>
#include <stack>

std::stack<int> S;
int N, T, count = 1;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	
	while (N--) {
		std::cin >> T;

		if (T == count) count++;
		else S.push(T);

		while (!S.empty() && S.top() == count) {
			S.pop();
			count++;
		}
	}
	
	if (S.empty()) std::cout << "Nice";
	else std::cout << "Sad";

	return 0;
}