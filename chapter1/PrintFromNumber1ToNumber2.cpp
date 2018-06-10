/*
 * 这是练习1.19的解答：打印一个范围内的所有整数
 * 可以处理第一个数比第二个数小的情形
 */
#include <iostream>

int main()
{
	auto v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 < v2)
	{
		for (auto i = v1; i <= v2; i++)
		{
			std::cout << i << " ";
		}
	} 
	else
	{
		for (auto i = v2; i <= v1; i++)
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}
