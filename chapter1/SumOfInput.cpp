#include <iostream>

int main()
{
	auto sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "所有输入数据的和为" << sum << std::endl;
	system("pause");
	return 0;
}