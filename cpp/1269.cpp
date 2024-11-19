#include <iostream>
#include <set>

int n, m, num;
std::set<int> s;

int main() 
{
	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::cin >> num;
		s.insert(num);
	}

	for (int i = 0; i < m; i++) {
		std::cin >> num;
		if (s.find(num) == s.end()) s.insert(num);
		else s.erase(num);
	}

	std::cout << s.size();
	return 0;
}