#include <iostream>

int main()
{
	auto sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "�����������ݵĺ�Ϊ" << sum << std::endl;
	system("pause");
	return 0;
}