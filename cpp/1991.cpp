#include <iostream>

#define LEFT 0
#define RIGHT 1

int N;
int graph[26][2];
char node;

void preorder(int node) {
	if (node == -1) return ;
	std::cout << char(node + 'A');
	preorder(graph[node][LEFT]);
	preorder(graph[node][RIGHT]);
}

void inorder(int node) {
	if (node == -1) return ;
	inorder(graph[node][LEFT]);
	std::cout << char(node + 'A');
	inorder(graph[node][RIGHT]);
}

void postorder(int node) {
	if (node == -1) return ;
	postorder(graph[node][LEFT]);
	postorder(graph[node][RIGHT]);
	std::cout << char(node + 'A');
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		char n, l, r;
		std::cin >> n >> l >> r;
		graph[n - 'A'][LEFT] = l == '.' ? -1 : int(l - 'A');
		graph[n - 'A'][RIGHT] = r == '.' ? -1 : int(r - 'A');
	}

	preorder(0);
	std::cout << "\n";
	inorder(0);
	std::cout << "\n";
	postorder(0);

	return 0;
}