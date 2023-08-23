#include <iostream>
#include <queue>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::priority_queue<int, std::vector<int>, std::greater<int> > A;
	std::priority_queue<int, std::vector<int>, std::less<int> > B;
	int input;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> input;
		A.push(input);
	}
	for (int i = 0; i < N; ++i)
	{
		std::cin >> input;
		B.push(input);
	}
	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		res += A.top() * B.top();
		A.pop();
		B.pop();
	}
	std::cout << res;

	return 0;
}