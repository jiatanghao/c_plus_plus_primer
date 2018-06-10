#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item item1, item2;
	//读取两条购买记录
	std::cin >> item1 >> item2;
	//重载+，这里假定isbn相同
	std::cout << item1 + item2 << std::endl;
	system("pause");
	return 0;
}