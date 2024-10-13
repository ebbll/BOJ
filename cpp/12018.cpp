#include <iostream>
#include <queue>

int N, M, P, L, mileage;
std::priority_queue<int, std::vector<int>, std::greater<int> > cal;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		std::cin >> P >> L;
		std::priority_queue<int, std::vector<int>, std::less<int> > temp;
		for (int j = 0; j < P; ++j) {
			std::cin >> mileage;
			temp.push(mileage);
		}
		if (P < L) cal.push(1);
		else {
			for (int x = 0; x < L - 1; ++x) {
				temp.pop();
			}
			cal.push(temp.top());
		}
	}

	int res = 0;
	while (!cal.empty()) {
		int t = cal.top();
		if (t > M) break ;
		++res;
		M -= t;
		cal.pop();
	}
	std::cout << res;

	return 0;
}