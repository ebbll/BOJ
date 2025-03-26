#include <iostream>
#include <vector>

int board[9][9];
int solved[9][9];
std::vector<std::pair<int, int> > blanks;

void copyBoard() {
	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j)	
			solved[i][j] = board[i][j];
}

bool check(int row, int col, int value) {
	int xblock = row / 3;
	int yblock = col / 3;

	// vertical check
	for (int i = 0; i < 9; ++i) {
		if (i == row) continue;
		if (board[i][col] && board[i][col] == value) return false;
	}
	
	// horizontal check
	for (int i = 0; i < 9; ++i) {
		if (i == col) continue;
		if (board[row][i] && board[row][i] == value) return false;
	}

	// block check
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			int xidx = xblock * 3 + i;
			int yidx = yblock * 3 + j;
			if (xidx == row && yidx == col) continue;
			if (board[xidx][yidx] && board[xidx][yidx] == value) return false;
		}
	}

	return true;
}

void dfs(int count) {
	int row, col;

	if ((size_t)count == blanks.size()) {
		copyBoard();
		return ;
	}

	row = blanks[count].first;
	col = blanks[count].second;
	for (int i = 1; i <= 9; ++i) {
		if (!check(row, col, i)) continue;
		board[row][col] = i;
		dfs(count + 1);
		board[row][col] = 0;
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			std::cin >> board[i][j];
			if (board[i][j] == 0) {
				blanks.push_back({i, j});
			}
		}
	}

	dfs(0);

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			std::cout << solved[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}