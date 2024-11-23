#include <iostream>
#include <vector>
#include <stack>
#include <queue>

int N, M, in;
std::vector<int> A(100000);
std::deque<int>  D;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	for (int i = 0; i < N; ++i) {
		std::cin >> in;
		if (A[i] == 0) D.push_back(in);
	}
	std::cin >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> in;
		D.push_front(in);
		std::cout << D.back() << ' ';
		D.pop_back();
	}

	return 0;
}