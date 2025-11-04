#include <iostream>
#include <string>
#include <algorithm>

std::string A, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true) {
		std::cin >> A >> B;

		if (A == "0" && B == "0") break ;

		std::reverse(A.begin(), A.end());
		std::reverse(B.begin(), B.end());

		if (A.length() < B.length()) std::swap(A, B);

		int count = 0;
		int prev = 0;

		int loop = (int)std::min(A.length(), B.length());

		for (int i = 0; i < loop; ++i) {
			int sum = 0;
			if (i == 0) sum = (A[i] - '0') + (B[i] - '0');
			else sum = (A[i] - '0') + (B[i] - '0') + prev;

			if (sum >= 10) {
				++count;
				prev = 1;
			} else {
				prev = 0;
			}
		}

		for (int i = loop; i < (int)A.length(); ++i) {
			int sum = 0;
			sum = A[i] + prev;
			if (sum >= 10) {
				++count;
				prev = 1;
			} else {
				prev = 0;
			}
		}

		std::cout << count << "\n";
	}

	return 0;
}