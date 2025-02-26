#include <iostream>

int N;
int nums[10];
int visited[10];

void dfs(int count) {
	if (count == N) {
		for (int i = 0; i < N; ++i) std::cout << nums[i] << " ";
		std::cout << "\n";
	} else {
		for (int i = 1; i <= N; ++i) {
			if (!visited[i]) {
				visited[i] =  true;
				nums[count] = i;
				dfs(count + 1);
				visited[i] = false;
			}
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	dfs(0);

	return 0;
}