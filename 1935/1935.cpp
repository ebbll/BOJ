#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <iomanip>
#include <cctype>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::string expression;
	std::cin >> n >> expression;
	std::vector<int> value(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> value[i];
	}
	std::stack<double> term;
	for (int i = 0; i < expression.length(); ++i)
	{
		char curr = expression[i];
		if (isalpha(curr))
		{
			term.push(value[curr - 'A']);
		}
		else
		{
			double y = term.top();
			term.pop();
			double x = term.top();
			term.pop();
			if (curr == '*')
			{
				term.push(x * y);
			}
			else if (curr == '/')
			{
				term.push(x / y);
			}
			else if (curr == '+')
			{
				term.push(x + y);
			}
			else // curr == '-'
			{
				term.push(x - y);
			}
		}
	}
	std::cout << std::fixed << std::setprecision(2) << term.top();

	return 0;
}
