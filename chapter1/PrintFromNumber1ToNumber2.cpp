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