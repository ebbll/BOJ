#include <iostream>
#include <string>

std::string N, M;
long long sum;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (size_t i = 0; i < N.length(); ++i) {
		for (size_t j = 0; j < M.length(); ++j) {
			sum += ((long long)(N[i] - '0')) * ((long long)(M[j] - '0'));
		}
	}
	std::cout << sum;

	return 0;
}