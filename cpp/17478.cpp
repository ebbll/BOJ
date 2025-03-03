#include <iostream>
#include <string>

int N;
std::string line = "____";
std::string str[4] =	{"\"재귀함수가 뭔가요?\"",
						"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",
						"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",
						"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""};
std::string answer = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
std::string end = "라고 답변하였지.";

void recurse(int n) {
	if (n == N) {
		for (int j = 0; j < n; j++) std::cout << line;
		std::cout << str[0] << "\n";
		for (int j = 0; j < n; j++) std::cout << line;
		std::cout << answer << "\n";
		for (int j = 0; j < n; j++) std::cout << line;
		std::cout << end << "\n";
		return;
	}

	for (int i = 0; i < 4; ++i) {
		for (int i = 0; i < n; ++i) std::cout << line;
		std::cout << str[i] << "\n";
	}
	recurse(n + 1);
	for (int i = 0; i < n; ++i) std::cout << line;
	std::cout << end << "\n";
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;

	std::cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
	recurse(0);

	return 0;
}