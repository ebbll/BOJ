#include <iostream>
#include <vector>

int N;
long long M;
std::vector<int> prime;

bool isPrime(int a)
{
	if (a == 2) return false;
	for (int i = 2; i * i <= a; i++)
		if (a % i == 0) return false;
	return true;
}

int main()
{
	std::cin >> N;
	for (int i = 2; i <= 1000000; i++)
		if (isPrime(i)) prime.push_back(i);

	for (int i = 0; i < N; i++) {
		std::cin >> M;

		bool flag = true;
		for (size_t j = 0; j < prime.size(); j++)
			if (M % prime[j] == 0) flag = false;

		if (flag == true) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}