#include <iostream>
//在该文件中重载了>>与<<操作符
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item book;
	//输入的格式为 booNo units_sold price
	/*
	 * booNo:书号
	 * units_sold:数量
	 * price:单价
	 */
	std::cin >> book;
	//输出的格式为isbn units_sold reveneue avg_price
	/*
     * isbn:书号
     * units_sold:数量
     * revenue:总价
     * avg_price:均价
	 */
	std::cout << book << std::endl;
	//保持窗口
	system("pause");
	return 0;
}