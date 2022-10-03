#include <iostream>
#include <vector>
#include <queue>

std::vector<int> map(500002, -1);
std::vector<int> timeforpos(500002, -1);
std::vector<int> posfortime(500002, 0);

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, K;
	std::cin >> N >> K;

	int elapse = 0;
	int add = 0;
	int nextmove = 0;
	while (true)
	{
		if (K + nextmove > 500000)
			break ;
		timeforpos[K + nextmove] = elapse;
		posfortime[elapse] = K + nextmove;
		++elapse;
		nextmove += elapse;
	}

	std::queue<std::pair<int, int> > queue;
	int currtime = 0;
	queue.push(std::make_pair(N, currtime));
	while (queue.empty() == false)
	{
		if (currtime > elapse)
			break ;
		++currtime;
		int x = queue.front().first;
		int timematch = queue.front().second;
		std::cout << "curr position: " << x << '\n';
		std::cout << "curr time: " << timematch << '\n';
		std::cout << "dest: " << posfortime[timematch] << '\n';
		if (x == posfortime[timematch])
		{
			std::cout << timeforpos[x] << ' ' << map[x];
			return 0;
		}
		queue.pop();
	
		for (int nx : {2 * x, x + 1, x - 1})
		{
			if ( nx < 0 || nx > 500000)
				continue ;
			if (map[nx] > 0)
				continue ;
			map[nx] = map[x] + 1;
			queue.push(std::make_pair(nx, currtime));
		}
	}

	std::cout << "-1";

	return 0;
}