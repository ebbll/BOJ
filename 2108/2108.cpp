#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>

int main(void)
{
	int N;
	std::cin >> N;
	std::vector<int> list(N);
	std::vector<int> frequency(8001);
	double sum = 0;
	for (int i = 0; i < N; ++i)
	{
		int input;
		std::cin >> input;
		list[i] = input;
		sum += input;
		++frequency[input + 4000];
	}

	std::sort(list.begin(), list.end());
	int avg, middle, freq, range;
	avg = std::floor(sum / N + 0.5);
	range = list[N - 1] - list[0];
	middle = list[N / 2];
	if (N == 1)
	{
		freq = list[0];
	}
	else
	{
		std::vector<int>::iterator maxPos = std::max_element(frequency.begin(), frequency.end());
		int maxcount = std::count(frequency.begin(), frequency.end(), *maxPos);
		if (maxcount == 1)
		{
			freq = (maxPos - frequency.begin()) - 4000;
		}
		else
		{
			std::vector<int>::iterator secondPos = std::find(maxPos + 1, frequency.end(), *maxPos);
			freq = (secondPos - frequency.begin()) - 4000;
		}
	}
	std::cout << avg << '\n' << middle << '\n' << freq << '\n' << range;

	return 0;
}