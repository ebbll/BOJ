#include <iostream>

int W, H, X, Y, P;

bool isInside(int a, int b)
{
	if (b >= Y && b <= Y + H)
	{
		if (a >= X && a <= X + W)
		{
			return true;
		}
		if ((H / 2) * (H / 2) >= (X - a) * (X - a) + (Y + H / 2 - b) * (Y + H / 2 - b))
		{
			return true;
		}
		if ((H / 2) * (H / 2) >= (X + W - a) * (X + W - a) + (Y + H / 2 - b) * (Y + H / 2 - b))
		{
			return true;
		}
	}
	return false;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> W >> H >> X >> Y >> P;
	int count = 0;
	for (int i = 0; i < P; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		if (isInside(a, b) == true)
			++count;
	}
	std::cout << count;

	return 0;
}