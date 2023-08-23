#include <iostream>
#include <stack>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::stack<int> stack;
	int res = 0;
	for (int loop = 0; loop < N; ++loop)
	{
		int input;
		std::cin >> input;
		while (stack.empty() == false && stack.top() <= input)
		{
			stack.pop();
		}
		stack.push(input);
		res += stack.size() - 1;
		std::cout << res << '\n';
	}
	std::cout << res;

	return 0;
}