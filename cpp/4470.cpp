#include <iostream>
#include <vector>
#include <string>

int N;
std::string in;
std::vector<std::string> words;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::cin.ignore();
	for (int i = 0; i < N; ++i) {
		getline(std::cin, in);
		words.push_back(in);
	}

	for (int i = 0; i < N; ++i) {
		std::cout << i + 1 << ". " << words[i] << "\n";
	}

	return 0;
}