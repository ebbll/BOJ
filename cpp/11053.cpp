#include <iostream>

int n;
int a[1010], d[1010];

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n;
	for (int i = 0; i < n; ++i) std::cin >> a[i];
	std::fill(d, d + n, 1);
	for (int i = 0; i < n; ++i)
	for (int j = 0; j < i; ++j)
		if (a[j] < a[i]) d[i] = std::max(d[i], d[j] + 1);

	std::cout << *std::max_element(d, d + n);
}