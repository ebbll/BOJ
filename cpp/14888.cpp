#include <iostream>

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

int N;
int nums[11];
int ops[4];
int res[11];
long long min, max;

void dfs(int level) {
	if (level == N) {
		long long cal = nums[0];
		for (int i = 1; i <= N; ++i) {
			switch (res[i])
				case ADD: {
					cal += nums[i];
					break ;
				}
				case SUB: {
					cal -= nums[i];
					break;
				}
				case MUL 
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) std::cin >> nums[i];
	for (int i = 0; i < 4; ++i) std::cin >> ops[i];

	dfs(0);

	return 0;
}