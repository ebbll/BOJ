#include <iostream>
#include <vector>
#include <algorithm>

int N, L, H;
double sum;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	std::cin >> N >> L >> H;
	std::vector<int> scores(N);

	for (int i = 0; i < N; ++i) {
		std::cin >> scores[i];
	}
	std::sort(scores.begin(), scores.end());

	for (int i = L; i < N - H; ++i) sum += scores[i];

	std::cout.precision(10);
	std::cout << sum / (N - L - H);

	return 0;
}