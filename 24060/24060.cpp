#include <iostream>
#include <vector>
#include <cmath>

int N, K;
int count = 0;
int res;
std::vector<int> A(500000);
std::vector<int> temp(500000);

void merge(int p, int q, int r)
{
	int i = p;
	int j = q + 1;
	int t = 0;

	while (i <= q && j <= r)
	{
		++count;
		if (A[i] <= A[j])
		{
			temp[t++] = A[i++];
		}
		else
			temp[t++] = A[j++];
		if (count == K)
		{
			res = temp[t - 1];
			return ;
		}
	}
	while (i <= q)
	{
		++count;
		if (count == K)
		{
			res = A[i];
			return ;
		}
		temp[t++] = A[i++];
	}
	while (j <= r)
	{
		++count;
		if (count == K)
		{
			res = A[j];
			return ;
		}
		temp[t++] = A[j++];
	}
	i = p;
	t = 0;
	while (i <= r)
	{
		A[i++] = temp[t++];
	}
}

void merge_sort(int p, int r)
{
	if (count >= K)
		return ;
	if (p < r)
	{
		int q = std::floor((p + r) / 2);
		merge_sort(p, q);
		merge_sort(q + 1, r);
		merge(p, q, r);
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> K;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> A[i];
	}
	merge_sort(0, N - 1);
	if (count < K)
		std::cout << -1;
	else
		std::cout << res;

	return 0;
}