#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;
	for (int loop = 0; loop < T; ++loop)
	{
		int len;
		std::cin >> len;
		std::priority_queue<long long, std::vector<long long>, std::greater<long long> > queue;
		for (int i = 0; i < len; ++i)
		{
			long long input;
			std::cin >> input;
			queue.push(input);
		}
		long long answer = 0;
		for (int i = 0; i < len - 1; ++i)
		{
			long long sum = queue.top();
			queue.pop();
			sum += queue.top();
			queue.pop();
			queue.push(sum);
			answer += static_cast<long long>(sum);
		}
		std::cout << answer << '\n';
	}

	return 0;
}