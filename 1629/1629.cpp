#include <iostream>

long long func(long long A, long long B, long long C)
{
	if (B == 1)
		return A % C;
	long long val = func(A, B / 2, C);
	val = val * val % C;
	if (B % 2)
		return val * A % C;
	else
		return val;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	long long A, B, C;
	std::cin >> A >> B >> C;
	std::cout << func(A, B, C);

	return 0;
}