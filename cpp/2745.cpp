#include <iostream>
#include <vector>
#include <string>

int B, res;
std::string N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<char> num(36);
	for (int i = 0; i <= 9; ++i)
		num[i] = i + '0';
	for (int i = 10; i <= 35; ++i)
		num[i] = 'A' + i - 10;

	std::cin >> N >> B;
	int l = 1;
	for (int i = N.length() - 1; i >= 0; --i) {
		int find;
		for (size_t idx = 0; idx < 36; ++idx) if (num[idx] == N[i]) find = idx;
		res += l * find;
		l *= B;
	}
	std::cout << res;

	return 0;
}