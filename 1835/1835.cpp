#include <iostream>
#include <deque>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::deque<int> deque;
	for (int i = n; i > 0; --i)
	{
		deque.push_front(i);
		for (int j = 0; j < i; ++j)
		{
			int back = deque.back();
			deque.pop_back();
			deque.push_front(back);
		}
	}
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
	{
		std::cout << *it << ' ';
	}

	return 0;
}
