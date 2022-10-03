#include <iostream>
#include <string>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input1;
	std::cin >> input1;
	int chunk1 = input1.length() / 9;
	int remain1 = input1.length() % 9;
	std::string input2;
	std::cin >> input2;
	int chunk2 = input2.length() / 9;
	int remain2 = input2.length() % 9;

	std::vector<std::string> list1;
	for (int i = 0; i < chunk1; ++i)
	{
		list1.push_back(input1.substr(i * 9, 9));
	}
	if (remain1)
	{
		list1.push_back(input1.substr((chunk1) * 9, remain1));
	}
	for (int i = 0; i < list1.size(); ++i)
	{
		std::cout << list1[i] << '\n';
	}
	std::vector<std::string> list2;
	for (int i = 0; i < chunk2; ++i)
	{
		list2.push_back(input2.substr(i * 9, 9));
	}
	if (remain2)
	{
		list2.push_back(input2.substr((chunk2) * 9, remain2));
	}
	for (int i = 0; i < list1.size(); ++i)
	{
		std::cout << list2[i] << '\n';
	}

	std::string res = "";
	int end1 = list1.size() - 1;
	int end2 = list2.size() - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		res = std::to_string(std::stoi(list1[end1]) + std::stoi(list2[end2])) + res;
		--end1;
		--end2;
	}
	while (end1 >= 0)
	{
		res = std::to_string(std::stoi(list1[end1]));
		--end1;
	}
	while (end2 >= 0)
	{
		res = std::to_string(std::stoi(list2[end2]));
		--end2;
	}
	std::cout << res;

	return 0;
}