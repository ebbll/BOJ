#include <iostream>
#include <vector>
#include <string>

std::string res;
int N, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<char> convert(36);
	for (int i = 0; i <= 9; ++i) convert[i] = '0' + i;
	for (int i = 10; i <= 35; ++i) convert[i] = 'A' + i - 10;

	std::cin >> N >> B;
	while (N > 0) {
		int find = N % B;
		res = convert[find] + res;
		N /= B;
	}
	std::cout << res;

	return 0;
}