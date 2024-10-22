#include <iostream>

int N;
bool D[1001];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	D[1] = true, D[2] = false, D[3] = true, D[4] = true;

	for (int i = 5; i <= N; i++)
		D[i] = !D[i - 1] || !D[i - 3] || !D[i - 4];
	std::cout << (D[N] ? "SK" : "CY");

	return 0;
}