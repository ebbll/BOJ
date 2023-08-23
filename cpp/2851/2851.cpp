#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> mushroom(10);
	std::vector<int> score(1, 0);
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> mushroom[i];
	}
	for (int i = 1; i <= 10; ++i)
	{
		score.push_back(score[i - 1] + mushroom[i - 1]);
		if (score[i] >= 100 || i >= 10)
			break;
	}
	int end = score.size() - 1;
	if (score[end] <= 100)
	{
		std::cout << score[end];
		return 0;
	}
	if (score[end] - 100 <= 100 - score[end - 1])
		std::cout << score[end];
	else
		std::cout << score[end - 1];
	return 0;
}
