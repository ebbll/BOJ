#include <iostream>
#include <string>
#include <stack>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::stack<char>	stack;
	std::string	input;
	std::cin >> input;
	int	ret = 0;
	for (std::string::iterator it = input.begin(); it != input.end(); ++it)
	{
		// 현재 유효한 쇠막대기 개수를 스택에 추가
		if (*it == '(')
			stack.push(*it);
		else // *it == ')'
		{
			std::string::iterator prev = it - 1;
			// 쇠막대기가 끝난 경우
			if (*prev == ')')
				++ret;
			// 레이저로 쇠막대기를 자른 경우
			else
				ret += stack.size() - 1;
			stack.pop();
		}
	}
	std::cout << ret;

	return 0;
}
