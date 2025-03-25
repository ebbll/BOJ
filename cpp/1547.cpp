#include <iostream>
#include <algorithm>

int N;
int a, b;
int cup;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	cup = 1;

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> a >> b;
		if (a == cup) cup = b;
		else if (b == cup) cup = a;
	}

	std::cout << cup;

	return 0;
}