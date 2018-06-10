#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			} else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	} else {
		std::cerr << "没有数据！\n";
		return -1;
	}
	return 0;
}