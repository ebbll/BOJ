#include <iostream>
#include <stack>

#define WALL 1
#define VISITED 2

int board[50][50];
int dir[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };


int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M, R, C, D;
	std::cin >> N >> M >> R >> C >> D;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cin >> board[i][j];
		}
	}

	std::stack<std::pair<int, int> > stack;
	stack.push(std::make_pair(R, C));
	board[R][C] = VISITED;
	int res = 1;
	while (true)
	{
		int x = stack.top().first;
		int y = stack.top().second;
		int turn = 0;
		while (turn < 4)
		{
			D = (D + 3) % 4;
			int nx = x + dir[D][0];
			int ny = y + dir[D][1];
			if (board[nx][ny] == 0)
			{
				stack.push(std::make_pair(nx, ny));
				board[nx][ny] = VISITED;
				++res;
				break ;
			}
			++turn;
		}
		if (turn == 4)
		{
			int backx = x + dir[(D + 2) % 4][0];
			int backy = y + dir[(D + 2) % 4][1];
			if (board[backx][backy] == WALL)
			{
				break ;
			}
			else
			{
				stack.push(std::make_pair(backx, backy));
				continue ;
			}
		}
		else
		{
			continue ;
		}
	}
	std::cout << res;

	return 0;
}